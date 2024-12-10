programa {
  funcao inicio() 
  {
      inteiro a, b, c, d 
      escreva("Insira a, b, c, d: ")
      leia(a, b, c, d)

      se ((b > c) e (d > a) e ((c + d) > (a + b)) e ((c > 0) e (d > 0)) e (a % 2 == 0))
      {
        escreva("Valores aceitos")
      } senao {
        escreva("Valores não aceitos")
      }
  }
}

//Leia 4 valores inteiros A, B, C e D. Em seguida, faça um algoritmo que, se B for maior do que C e se D for
//maior do que A, e a soma de C com D for maior que a soma de A e B e se C e D, ambos, forem positivos e se a
//variável A for par, escreva a mensagem "Valores aceitos", senão escrever "Valores não aceitos".