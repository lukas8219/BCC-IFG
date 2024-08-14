//Faça um algoritmo para ler o salário fixo e o valor das vendas efetuadas por três vendedores
//de uma empresa. Sabendo-se que cada um recebe uma comissão de 3% sobre o total das
//vendas até R$ 1.500,00 e 5% para os vendedores que ultrapassar este valor, calcular e escrever
//o salário total para os três vendedores. Considere o uso de uma função para esse algoritmo.

programa {

  funcao inicio() {
    real salario = 0, vendas1 = 0, vendas2 = 0, vendas3 = 0
    cadeia vendedor1, vendedor2, vendedor3

    escreva("insira salario: ")
    leia(salario)

    escreva("insira vendedor 1 e vendas: ")
    leia(vendedor1, vendas1)
    escreva("Salario do vendedor ", vendedor1, " :", calcularSalario(salario, vendas1), "\n")

    escreva("insira vendedor 2 e vendas: ")
    leia(vendedor2, vendas2)
    escreva("Salario do vendedor ", vendedor2, " :", calcularSalario(salario, vendas2), "\n")

    escreva("insira vendedor 3 e vendas: ")
    leia(vendedor3, vendas3)
    escreva("Salario do vendedor ", vendedor3, " :", calcularSalario(salario, vendas3), "\n")
    
  }

funcao real calcularSalario (real salario, real vendas)
{
  real salario_final = 0

  se (vendas <= 1500)
  {
    salario_final = salario + vendas * 0.03
  }
  senao
  {
    salario_final = salario + vendas * 0.05
  }
  retorne salario_final
}

}

