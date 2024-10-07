#include <stdio.h>

int main(void)
{
    int n = 2; // n = 2

    int *p = &n; // p é um ponteiro que armazena o endereço de n

    // nao e possivel fazer p = n

    printf("%d\n", p); // out: 6422044 -> endereço da variavel n em decimal
    printf("%p\n", p); // out: 000000000061FE1C -> o mesmo endereço, mas em hexa
    printf("%d\n", *p); // out: 2 -> o valor armazenado dentro do endereço armazenado em p
    printf("%d\n", &p); // out: 6422032 -> o endereço do ponteiro p em si
    printf("\n\n");

    *p = n; // faz exatamente a mesma coisa
    printf("%d\n", p); // out: 6422044 -> endereço da variavel n em decimal
    printf("%p\n", p); // out: 000000000061FE1C -> o mesmo endereço, mas em hexa
    printf("%d\n", *p); // out: 2 -> o valor armazenado dentro do endereço armazenado em p
    printf("%d\n", &p); // out: 6422032 -> o endereço do ponteiro p em si
    printf("\n\n");

    // a diferenca entre os dois primeiros casos, é que durante a inicialização, a notação deve conter o &
    // uma vez que o ponteiro ja foi declarado, o & nao é necessario

    int *q = p;
    printf("%d\n", q); // out: 6422044 -> endereço da variavel n em decimal
    printf("%p\n", q); // out: 000000000061FE1C -> o mesmo endereço, mas em hexa
    printf("%d\n", *q); // out: 2 -> o valor armazenado dentro do endereço armazenado em p
    printf("%d\n", &q); // out: 6422024 -> endereço da variavel q
    printf("\n\n");

    // nao e possivel apontar um ponteiro para outro ponteiro, 
    // *q = p; -> aponta q para o mesmo endereço de p, mas
    // q = &p; -> isso não é permitido, pois p e q são ponteiros de >inteiro<
    // a menos que este seja um ponteiro de ponteiro
    
    int **o = &q; // o é um ponteiro para q.
    printf("%d\n", o); // out: 6422024 -> endereço do ponteiro q em decimal
    printf("%p\n", o); // out: 000000000061FE08 -> o mesmo endereço, mas em hexa
    printf("%d\n", *o); // out: 6422044 -> valor armazenado no ponteiro q, que é o endereço de n
    printf("%d\n", &o); // out: 6422016 -> endereço da variavel o em si
    printf("\n\n");

    // podemos usar um ponteiro para alterar o valor de uma variavel com:
    *p = 4;
    printf("%d\n", n); // out: 4
    // com essa notação, vamos ate o endereço armazenado em p e o alteramos para 4
    // p armazenava o endereco de n, entao foi como dizer -> n = 4

    // vamos criar uma nova variavel m
    int m = 0;
    m = *p; // atribuimos m ao que esta armazenado dentro de p 
    printf("%d\n", m); // out: 4

    // sabmos que tanto o ponteiro q quando o p apontam para n,
    // vamos apontar p para m agora
    p = &m;
    *p = 6; // m agora vale 6
    printf("%d\n", m); // out: 6
    printf("%d\n", p); // out: 446422040 -> endereço da variavel m em decimal
    printf("%p\n", p); // out: 000000000061FE18 -> o mesmo endereço, mas em hexa
    printf("%d\n", *p); // out: 6 -> o valor armazenado dentro do endereço armazenado em p
    printf("%d\n", &p); // out: 6422032 -> o endereço do ponteiro p em si
    printf("\n\n");

    // no momento atual, temos que:
    // q -> n = 4
    // p -> m = 6

    // similarmente a
    // m = n;
    // podemos fazer:
    *p = *q;
    printf("%d ", n);
    printf("%d ", m);
}