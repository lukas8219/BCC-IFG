Passo a passo para resolver a prova de POO

1. Crie os pacotes: será comprado MVC usando o padrão Observer e a Persistência de dados. É possível, ainda, que conceitos já vistos como Fábrica de Objetos e Exceções estejam presentes. Seu codigo deverá estar distribuido em, pelo menos:

Prova/
│
├── Controller/
│   └── controller.java
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
└── Main.java
│   ├── Main.java

Os pacotes de `controler`, `model`, `view` e `main` são obrigatórios, mas é possível ou desejavel adicionar mais, como o de serealização, fabrica de objetos e tratamento de exceções. 

2. Faça o modelo.

3. Inicie o padrão observer no modelo.
Para isso, você precisará criar duas classes adicionais. Abaixo está a escrição delas. Pode parecer confuso, mas no tópico 4 entenderemos como podemos conectá-las.
    - ProvaEvent, classe filha do EventObject de Java:
    O objetivo dessa classe é representar o evento associado ao seu modelo; isto é, representar as mudanças que ocorrem no seu modelo que podem intessar a view a cada evento.
    
    Exemplo: na classe modelo "Enquete", temos como atributos: opção e númeroDeVotos. Chamamos de evento qualquer interação que o usuário possa ter com esses atributos! Se tenho duas opções: Bobonaro e Lulamolusco, e o usuário vota em algum, é preciso que essa mudança (no modelo) se manifesta visualmente (na view), ou seja, que uma tela contabilize o número de votos. Como estamos usando o modelo MVC + padrão Observer, o modelo se comunicará com a view através dessa classe. É como se fosse um relatório com os campos pré-preenchidos que caminha do modelo até a view.

    Na prática, a classe segue esse modelo:

    `public class ProvaEvent extends EventObject {
        private tipo atributo; // é o atributo do modelo que a view quer saber quando houver mudanças

        public ProvaEvent(Modelo source) {
            super(source); // source é a classe do seu modelo, parte obrigatoria para o EventObject do Java
        }
        public ProvaEvent(Modelo source, tipo atributo) {
            super(source);
            this.atributo(atributo);
        }
        // apenas os getters 
    }`

    - ProvaListener, uma interface que é filha de EventListener:
    Ser uma interface significa padronizar uma forma de tratar os dados atráves de métodos. E ser um classe filha de EventListener significa fazer parte da forma que o Java lida com os eventos descritos acima. O que isso significa? Aqui criamos os métodos que as classes que tem interesse em ouvir as mudanças no modelo (a view) devem implementar.
    Na prática, a classe segue esse modelo:

    public interface ProvaListener extends EventListener {
        public void novaMudanca(ProvaEvent evento);
    }

4. Agora que criamos esses mecanismos, podemos retornar ao modelo para implementá-los. Lembre-se de como é feita a comunicação no modelo MVC: view -> controller -> modelo -> view. No nosso modelo, criaremos um atributo do tipo List (ArrayList, LinkedList) que armazenará quem (da view) tem interesse em saber as mudanças no modelo. É feito dessa forma:
    `private List<ProvaListener> provaListeners = new LinkedList();`
    Sim, esse atributo tem como "tipo" uma interface, o que significa que todos os modelos que implementam aquela interface podem participar: o(s) compoenente(s) da view.

Criamos agora um método que adiciona as classes interessadas em participar da lista de ouvintes:
    `public void addListener(ProvaListener listener) {
        if (provaListeners.contains(listener)) {
            return;
        }
        this.provaListeners.add(listener); // add é um metodo que ja vem classe List
    }`

Agora que temos uma lista de "observadores" das mudanças que ocorrem no modelo, precisamos criar os atributos que irão acioná-la. Dentro do modelo, faça:
    `private void DisparaEvento(tipo atributoDoEvento) { // um metodo que nao retona nada, mas recebe o 
                                                            atributo da classe que sofreu mudança
        for(ProvaListener listeners: this.provaListeners) { // percorre a lista de observadores que criamos acima
            listeners.novaMudanca(new ProvaEvent(this, atributoDoEvento)); // em cada listener, chama o metodo que criamos na interafce ProvaListener e enviamos um novo ProvaEvent contendos os dados daquele evento: "this" refere-se a propria classe, "atributoDoEvento" é o que recebemos como parametro de entrada 
        }
    }`
Por fim, sempre que houver uma mudança no modelo, você chamará esse(s) métodos que disparam um novo evento. Ao final de cada método setter ou método que faça mudanças importantes no modelo, chame esses metodos. 
    `DisparaEvento(atributoAlterado);`

Vamos recapitular o que aconteceu: no modelo MVC, o modelo comunica a view as mudanças na classe. Lembre-se que podemos ter várias telas diferentes que compõe a view, então precisamos criar um meio de realizar essa comunicação de maneira organizada.
Para isso, criamos uma lista de observadores que desejam saber as mudanças que acontecem no modelo dentro do próprio modelo. Toda vez que o modelo é alterado, enviamos para essa lista as mudanças que aconteceram. Esse envio é feito de maneira padronizada, em que a view sempre envia um relatório com a mudança que ocorreu naquele instante (ProvaEvent) a todos os observadores possuem uma caixa de correios especifica para receber essas mudanças (definidas em ProvaListener).

5. Crie suas telas da view. Use o javaSwing e o JOptionPane. As telas devem implementar a interafce ProvaListener, pois desejam ser notificados das mudanças que acontecem no modelo, bem como os metodos definidos por ele de acordo com a necessidade. Adicione, também, o atributo:
    `private ActionListener controller;`
    Essa será a referência ao controller da aplicação. O tipo ActionListener é uma interface definida pela biblioteca AWT e permite que eventos desejados sejam notificados a uma classe. Será dessa forma que a nossa view se comunicará com o controller em si a cada evento (interação do usuário) que acontecer na view.

6. Crie o controller. O controller é um intermediário entre a view e o modelo, que comunica ao modelo as mudanças solicitadas pela view, por exemplo: "um botão clicado e agora precisamos contabilizar no banco de dadoos um novo voto". Ele deve se assemelhar a isso:
    
    public class Controller implements ActionListener {
        private Prova prova; // nosso modelo

        public Controller(Prova prova) {
            this.prova(prova);
        }

        public void actionPerformed(ActionEvent event) {
            // sua logica aqui
            prova.metodoNecessario(event.getActionCommand());
         }
    }

O ultimo metodo é chamado automaticamente sempre que um novo evento acontecer na tela, por exemplo, quando algum click acontecer. Essa informação de interação é repassada para o controller, que trata a maneira como isso interage com a view: chamando um metodo especifico. 
Exemplificando melhor: no nosso exemplo de votação, implementamos uma tela (na view) um botão que permite votar em determinado usuário. Quando o botão é selecionado, essa informação (um novo voto foi contabilizado) é repassada ao controller. No controller, definimos que para esse caso, é necessário chamar um metodo do modelo que contabilize o voto. O modelo recebe essa mudança, altera na base de dados, e comunica a view novamente. A view reage mostrando na tela que certo candidato está com um voto a mais.

7. Serialização: agora que temos o MVC funcionando, basta ter certeza que os dados não seráo perdidos. Para isso, podemos usar a serealização. Na classe principal de nosso modelo, impementamos a interface Serialization e adicionamos a linnha:
    `private static final long serialVersionUID = 1L;`

Criemmos um pacote chamado `serialização` que possui uma classe com os seguintes metodos: 
    public static void serialize(String path, Object obj) throws Exception {
		FileOutputStream outFile = new FileOutputStream(path);
		ObjectOutputStream s = new ObjectOutputStream(outFile);
		s.writeObject(obj);
		s.close();
	}

    public static Object deserialize(String path) throws Exception, ClassNotFoundException {
		FileInputStream inFile = new FileInputStream(path);
		ObjectInputStream d = new ObjectInputStream(inFile);
		Object o = d.readObject();
		d.close();
		return o;
    } 

Para implementá-las no restante do código, basta chamar o metodo `serialize` sempre que houver uma mudança no modelo (tipicamente, no final de cada setter) e o método `deserialize` toda vez que o aplicativo é iniciado. 
O parametro de entrada `String path` refere-se ao endereço de onde será armazenado, e pode ser descrito em: `./Nome.obj`. Lembre-se de usar o try{} catch(){}, pois esse fluxo pode conter erros.