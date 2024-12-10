programa {
  funcao inicio() 
  {
      real custoConsumidor, custoFabrica, porcentagemDistribuidor, imposto

      escreva("Qual foi o custo da fábrica? ")
      leia(custoFabrica)

      porcentagemDistribuidor=custoFabrica*28/100
      imposto=custoFabrica*45/100
      custoConsumidor=custoFabrica+porcentagemDistribuidor+imposto
      
      escreva("O custo ao consumidor é de R$", custoConsumidor, "\n")
      
  }
}
