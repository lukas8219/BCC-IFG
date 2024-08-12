programa {
  funcao inicio() 
  {
      real saldo, entrada, retirada 
      saldo = 0
      escreva("Qual é a entrada do 1° mês? ")
      leia(entrada)
      escreva("Qual é a saída do 1° mês? ")
      leia(retirada)
      saldo=saldo+entrada-retirada
      saldo=saldo+(saldo*2/100)
      escreva("Primeiro mês: ", saldo, "\n")
      
      escreva("Qual é a entrada do 2° mês? ")
      leia(entrada)
      escreva("Qual é a saída do 2° mês? ")
      leia(retirada)
      saldo=saldo+entrada-retirada
      saldo=saldo+(saldo*2/100)
      escreva("Segundo mês: ", saldo, "\n")
      
      escreva("Qual é a entrada do 3° mês? ")
      leia(entrada)
      escreva("Qual é a saída do 3° mês? ")
      leia(retirada)
      saldo=saldo+entrada-retirada
      saldo=saldo+(saldo*2/100)
      escreva("Terceiro mês: ", saldo, "\n")
      
      escreva("Qual é a entrada do 4° mês? ")
      leia(entrada)
      escreva("Qual é a saída do 4° mês? ")
      leia(retirada)
      saldo=saldo+entrada-retirada
      saldo=saldo+(saldo*2/100)
      escreva("Quarto mês: ", saldo, "\n")
      
      
  }
}
