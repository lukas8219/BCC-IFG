programa {
  funcao inicio() 
  {
      real a, b
      caracter c

      escreva("Insira a: ")
      leia(a)
      escreva("Insira operador relacional: ")
      leia(c)
      escreva("Insira b: ")
      leia(b)

      escolha(c)
      {
        caso ">":
          se (a > b)
          {
            escreva("O valor ", a, " � maior que ", b)
          } senao {
            escreva("O valor ", a, " n�o � maior que ", b)
          }
          pare
        caso "<":
          se (a < b)
          {
            escreva("O valor ", a, " � menor que ", b)
          } senao {
          escreva("O valor ", a, " n�o � menor que ", b)
          }
          pare
        caso "=":
          se (a == b)
          {
            escreva("O valor ", a, " � igual a ", b)
          } senao {
            escreva("O valor ", a, " n�o � igual a ", b)
          }
          pare
        caso "!":
          se (a != b)
          {
            escreva("O valor ", a, " � diferente de ", b)
          } senao {
            escreva("O valor ", a, " n�o � diferente de ", b)
          }
          pare
        caso contrario:
          escreva("Input invalido. Insira um operador relacional valido: >, <, =, !")
      }
      
  }
}
