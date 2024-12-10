programa {
  funcao inicio() 
  {
      real a, b, temp
      escreva("Defina a: ")
      leia(a)

      escreva("Defina b: ")
      leia(b)

      temp=a
      a=b
      b=temp

      escreva("Os valores foram trocados, A agora é ", a, " e B agora é ", b, "\n")  
  }
}
