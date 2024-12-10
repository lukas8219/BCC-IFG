programa {
  funcao inicio() 
  {
      inteiro a, b
      escreva("Insira a: ")
      leia(a)
      escreva("Insira b: ")
      leia(b)

      a = a + b
      se (a > 20)
      {
        a+= 20
      }
      senao
      {
        a -= 5
      }
      escreva(a)
  }
}
