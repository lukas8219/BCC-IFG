programa {
  funcao inicio() 
  {
      real saldo, entrada, retirada 
      saldo = 0
      escreva("Qual � a entrada do 1� m�s? ")
      leia(entrada)
      escreva("Qual � a sa�da do 1� m�s? ")
      leia(retirada)
      saldo=saldo+entrada-retirada
      saldo=saldo+(saldo*2/100)
      escreva("Primeiro m�s: ", saldo, "\n")
      
      escreva("Qual � a entrada do 2� m�s? ")
      leia(entrada)
      escreva("Qual � a sa�da do 2� m�s? ")
      leia(retirada)
      saldo=saldo+entrada-retirada
      saldo=saldo+(saldo*2/100)
      escreva("Segundo m�s: ", saldo, "\n")
      
      escreva("Qual � a entrada do 3� m�s? ")
      leia(entrada)
      escreva("Qual � a sa�da do 3� m�s? ")
      leia(retirada)
      saldo=saldo+entrada-retirada
      saldo=saldo+(saldo*2/100)
      escreva("Terceiro m�s: ", saldo, "\n")
      
      escreva("Qual � a entrada do 4� m�s? ")
      leia(entrada)
      escreva("Qual � a sa�da do 4� m�s? ")
      leia(retirada)
      saldo=saldo+entrada-retirada
      saldo=saldo+(saldo*2/100)
      escreva("Quarto m�s: ", saldo, "\n")
      
      
  }
}
