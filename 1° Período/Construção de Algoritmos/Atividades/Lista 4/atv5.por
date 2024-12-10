programa {
  funcao inicio() {
    inteiro clientes = 5
    
    enquanto (clientes > 0)
    {
      lerCliente()
      clientes = clientes - 1
    }
 
  }

  funcao lerCliente()
  {
    caracter combustivel, cliente
    inteiro litros = 0

    escreva("insira cliente: ")
    leia(cliente)

    escreva("insira combustivel e litros: ")
    leia(combustivel, litros)

    escreva("cliente: ", cliente, " deve: ", calcularTotal(combustivel, litros), "\n")

  }

  funcao real calcularTotal(caracter combustivel, inteiro litros)
  {
    real total = 0
    se (combustivel == 'A' ou combustivel == 'a')
    {
      total = litros * 2.90
      se (litros <= 20)
      {
          total = total - total * 0.03
      } senao {
        total = total - total * 0.05
      }
    } senao {
      total = litros * 3.30
      se (litros <= 30)
      {
        total = total - total * 0.04
      } senao {
        total = total - total * 0.06
      }
    }
    retorne total
  }
}


//Um posto est� vendendo combust�veis com a seguinte tabela de descontos:
//�lcool At� 20 litros, desconto de 3%
//Acima de 20 litros, desconto de 5%
//Gasolina At� 30 litros, desconto de 4%
//Acima de 30 litros, desconto de 6%
//Escreva um algoritmo que leia o n�mero de litros e o tipo de combust�vel vendido para cinco
//clientes, codificando o tipo da seguinte forma: A (�lcool), G (gasolina). Seu algoritmo,
//modularizado por fun��o, deve calcular e imprimir o valor a ser pago para cada cliente.
//Sabendo-se que o pre�o do litro da gasolina � R$ 3,30 e o pre�o do litro do �lcool � R$ 2,90. 