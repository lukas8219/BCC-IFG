# Passo a Passo para Resolver a Prova de POO

## 1. Estruturação do Projeto

O primeiro passo essencial para a organização do seu código é a criação dos pacotes. O padrão que utilizaremos será o **MVC (Model-View-Controller)** combinado com o **Observer** e a **Persistência de Dados**. Além disso, conceitos já vistos, como **Fábrica de Objetos** e **Tratamento de Exceções**, poderão estar presentes.

Seu código deverá estar distribuído, no mínimo, da seguinte maneira:

```
Prova/
│
├── Controller/
│   └── Controller.java
│
├── Model/
│   ├── Model.java
│
├── View/
│   └── View.java
│
├── Serializacao/
│   ├── Serializar.java
│   └── Deserializar.java
│
└── Main/
    ├── Main.java
```

Os pacotes `Controller`, `Model`, `View` e `Main` são **obrigatórios**. No entanto, é **altamente recomendável** adicionar outros pacotes conforme a necessidade do projeto, como `Serializacao` para persistência de dados, um pacote para **Fábrica de Objetos** e um para **Tratamento de Exceções**. Isso tornará o código mais modular e organizado.

## 2. Criando o Modelo

O modelo é a parte responsável pela lógica e pelo gerenciamento de dados da aplicação. Nele, estarão os atributos e métodos que representam o estado e comportamento do nosso sistema.

Para que o modelo se comunique de forma eficiente com a **View**, utilizaremos o padrão **Observer**. Para isso, será necessário criar dois componentes adicionais:

### 2.1 ProvaEvent (Classe que representa eventos do modelo)

Essa classe será responsável por encapsular as informações das mudanças que acontecem no modelo. Como estamos usando **Java**, nossa classe **deverá ser filha da classe EventObject**.

Exemplo:
```java
import java.util.EventObject;

public class ProvaEvent extends EventObject {
    private Object atributo; // Atributo do modelo que sofreu alteração

    public ProvaEvent(Model source) {
        super(source); // Passa a referência do objeto que sofreu alteração
    }
    
    public ProvaEvent(Model source, Object atributo) {
        super(source);
        this.atributo = atributo;
    }
    
    public Object getAtributo() {
        return atributo;
    }
}
```

### 2.2 ProvaListener (Interface que define ouvintes de eventos)

Os ouvintes (observers) precisam ser informados sempre que o modelo sofre uma alteração. Para isso, criamos uma **interface** que implementa `EventListener`, que servirá como um "contrato" para classes que desejam ouvir eventos do modelo.

Exemplo:
```java
import java.util.EventListener;

public interface ProvaListener extends EventListener {
    void novaMudanca(ProvaEvent evento);
}
```

## 3. Implementando o Observer no Modelo

Agora que criamos os eventos e os ouvintes, podemos modificar o **modelo** para que ele utilize essa estrutura. Dentro do modelo, criaremos uma **lista de ouvintes** que desejam ser notificados quando houver mudanças.

### 3.1 Criando a lista de ouvintes:
```java
import java.util.ArrayList;
import java.util.List;

private List<ProvaListener> provaListeners = new ArrayList<>();
```

### 3.2 Criando um método para adicionar ouvintes:
```java
public void addListener(ProvaListener listener) {
    if (!provaListeners.contains(listener)) {
        provaListeners.add(listener);
    }
}
```

### 3.3 Criando um método para notificar os ouvintes quando houver uma mudança:
```java
private void DisparaEvento(Object atributoDoEvento) {
    ProvaEvent evento = new ProvaEvent(this, atributoDoEvento);
    for (ProvaListener listener : provaListeners) {
        listener.novaMudanca(evento);
    }
}
```

Sempre que uma mudança ocorrer no modelo, devemos chamar o método `DisparaEvento(atributoAlterado);` para notificar a View.

## 4. Criando a View

A **View** é a parte gráfica da aplicação. Utilizaremos **Java Swing** para implementá-la, e é importante que ela implemente `ProvaListener`, pois assim poderá reagir às mudanças do modelo.

Além disso, precisamos de um atributo para armazenar a referência ao **Controller**:
```java
private ActionListener controller;
```

A **View** se comunicará com o **Controller** através do **ActionListener**, que notificará quando eventos de interface ocorrerem.

## 5. Criando o Controller

O **Controller** age como um intermediário entre a **View** e o **Modelo**. Ele recebe eventos da View e os repassa para o modelo.

Exemplo de implementação:
```java
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Controller implements ActionListener {
    private Model prova; // Nosso modelo

    public Controller(Model prova) {
        this.prova = prova;
    }

    @Override
    public void actionPerformed(ActionEvent event) {
        // Lógica do Controller para interagir com o modelo
        prova.metodoNecessario(event.getActionCommand());
    }
}
```

Quando o usuário interagir com a **View** (por exemplo, clicando em um botão), essa interação será capturada pelo **Controller**, que tomará as medidas necessárias para modificar o **Modelo**.

## 6. Implementando a Serialização

Agora que temos nossa aplicação estruturada, precisamos garantir que os dados não serão perdidos ao fechar o programa. Para isso, utilizamos **Serialização**.

### 6.1 Tornando o modelo serializável:
A classe principal do nosso **Modelo** deve implementar `Serializable` e possuir a linha:
```java
private static final long serialVersionUID = 1L;
```
Isso garante que o estado do objeto pode ser salvo e recuperado depois.

### 6.2 Criando a classe de Serialização:
Criamos um pacote chamado `Serializacao` e adicionamos dois métodos:
```java
import java.io.*;

public class Serializar {
    public static void serialize(String path, Object obj) throws Exception {
        FileOutputStream outFile = new FileOutputStream(path);
        ObjectOutputStream s = new ObjectOutputStream(outFile);
        s.writeObject(obj);
        s.close();
    }
    
    public static Object deserialize(String path) throws Exception {
        FileInputStream inFile = new FileInputStream(path);
        ObjectInputStream d = new ObjectInputStream(inFile);
        Object o = d.readObject();
        d.close();
        return o;
    }
}
```

Sempre que houver uma mudança no modelo, chamamos `serialize("./dados.obj", objeto)` para salvar os dados. Ao iniciar a aplicação, usamos `deserialize("./dados.obj")` para recuperar os dados salvos.

---
