programa {
  funcao inicio() 
  {
      cadeia vendedor1, vendedor2
      real salario, vendas1, vendas2

      escreva("Insira o nome do vendedor 1 e valor de vendas: ")
      leia(vendedor1, vendas1)

      escreva("Insira o nome do vendedor 2 e valor de vendas: ")
      leia(vendedor2, vendas2)

      escreva("Qual � o sal�rio fixo? ")
      leia(salario)

      escreva("O sal�rio final do vendedor ", vendedor1, "� de", salario+vendas1*0,15, "\n")
      escreva("O sal�rio final do vendedor ", vendedor2, "� de", salario+vendas2*0,15, "\n")
  }
}
