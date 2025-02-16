10.1 PILHAS E FILAS, EXERCICIOS TEORICOS, PAG. 174

10.2-1 Você pode implementar a operação de conjuntos dinâmicos `insert` em uma lista simplismente encadeada em tempo O(1)? E a operação `delete`?
Uma lista simplismente encadeada é um tipo de estrutura de dados linear composta por unidades menores chamadas nós. Cada nó contém o conteúdo a ser armazenado e um ponteiro que aponta para o próximo nó da lista. O tempo de operação dependerá, portanto, se essa lista está implementada como uma pilha ou uma fila:
    - Se é uma pilha, `inserte` e `delete` tem tempo O(1);
    - Se é uma fila, `insert` tem tempo O(n) e `delete` tem tempo O(1).
Em ambos os casos, a resposta deve considerar também se a operação `delete` será realizada em algum nó especifico de ambas; em ambos os casos, a operação varia de tempo O(1) a O(n).