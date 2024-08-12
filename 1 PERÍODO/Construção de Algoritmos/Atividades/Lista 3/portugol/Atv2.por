programa {
  funcao inicio() 
  {
      real salario, emprestimo

      escreva("Insira o salario: ")
      leia(salario)
      escreva("Insira emprestimo: ")
      leia(emprestimo)

      se (emprestimo < (salario * 0.3))
      {
        escreva("Aprovado")
      } senao {
        escreva("Reprovado")
      }
  }
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 184; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */