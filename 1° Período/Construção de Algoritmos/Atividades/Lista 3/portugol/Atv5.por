programa {
  funcao inicio() 
  {
      real nota
      inteiro frequencia

      escreva("Insira nota: ")
      leia(nota)

      escreva("Insira frequencia: ")
      leia(frequencia)

      se (frequencia < 75 ou nota < 3)
      {
        escreva("Reprovado")
      }
      senao se (frequencia > 75 e (nota > 3 e nota < 7))
      {
        escreva("Exame")
      } senao {
        escreva("Aprovado")
      }
  }
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 374; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */