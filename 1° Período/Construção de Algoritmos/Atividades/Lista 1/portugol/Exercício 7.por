programa {
  funcao inicio() 
  {
      real custoConsumidor, custoFabrica, porcentagemDistribuidor, imposto

      escreva("Qual foi o custo da f�brica? ")
      leia(custoFabrica)

      porcentagemDistribuidor=custoFabrica*28/100
      imposto=custoFabrica*45/100
      custoConsumidor=custoFabrica+porcentagemDistribuidor+imposto
      
      escreva("O custo ao consumidor � de R$", custoConsumidor, "\n")
      
  }
}
