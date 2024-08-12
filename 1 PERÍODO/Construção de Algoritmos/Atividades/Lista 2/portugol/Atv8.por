programa {
  funcao inicio() 
  {
      real sanduiche, queijo, presunto, hamburguer 

      escreva("Quantidade de sanduiches a serem feitos: ")
      leia(sanduiche)

      hamburguer = sanduiche * 0.1
      queijo = sanduiche * 2 * 0.05
      presunto = sanduiche * 0.05

      escreva("As quantidades são de: ", hamburguer, "kg de hambúrguer, ", queijo, "kg de queijo, ", presunto, "kg de presunto")
  }
}
