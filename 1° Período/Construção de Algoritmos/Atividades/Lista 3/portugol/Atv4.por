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
            escreva("O valor ", a, " é maior que ", b)
          } senao {
            escreva("O valor ", a, " não é maior que ", b)
          }
          pare
        caso "<":
          se (a < b)
          {
            escreva("O valor ", a, " é menor que ", b)
          } senao {
          escreva("O valor ", a, " não é menor que ", b)
          }
          pare
        caso "=":
          se (a == b)
          {
            escreva("O valor ", a, " é igual a ", b)
          } senao {
            escreva("O valor ", a, " não é igual a ", b)
          }
          pare
        caso "!":
          se (a != b)
          {
            escreva("O valor ", a, " é diferente de ", b)
          } senao {
            escreva("O valor ", a, " não é diferente de ", b)
          }
          pare
        caso contrario:
          escreva("Input invalido. Insira um operador relacional valido: >, <, =, !")
      }
      
  }
}
