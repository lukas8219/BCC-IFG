programa {

  inclua biblioteca Util --> u

  funcao inicio() 
  {
      inteiro a, b
      cadeia imparOuPar
      escreva("Insira um numero inteiro: ")
      leia(a)
      escreva("Impar ou par? ")
      leia(imparOuPar)

      b = u.sorteia(0, 10)
      escreva("A maquina escolheu: ", b, "\n")

      se (imparOuPar == "impar")
      {
        se ((a + b)%2 == 1)
        {
          escreva("Você ganhou ganhou!")
        } senao {
          escreva("A máquina ganhou")
        }
      } senao se (imparOuPar == "par")
      {
        se ((a + b)%2 == 0)
        {
          escreva("Você ganhou!")
        } senao {
          escreva("A máquina ganhou!")
        }
      } senao {
        escreva("Erro: input inválido!")
      }
  }
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 621; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */