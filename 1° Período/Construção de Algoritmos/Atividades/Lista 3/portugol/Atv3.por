programa {
  funcao inicio() 
  {
      real a, b
      caracter c

      escreva("Insira a: ")
      leia(a)
      escreva("Insira operador aritmetico: ")
      leia(c)
      escreva("Insira b: ")
      leia(b)

      escolha(c)
      {
        caso "+":
          a+=b
          pare
        caso "-":
          a-=b
          pare
        caso "*":
          a*=b
          pare
        caso "/":
          a/=b
          pare
        caso contrario:
          escreva("Input invalido. Insira algum operadr numerico valido: +, -, *, /")
      } 

      escreva("Resultado: ", a)
  }
}
