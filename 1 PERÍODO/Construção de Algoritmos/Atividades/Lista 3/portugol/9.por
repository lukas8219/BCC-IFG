programa {

  funcao inteiro ehBissexto(inteiro ano)
  {
      se ((ano % 400 == 0) ou ((ano % 4 == 0) e (ano % 100 != 0)))
      {
        retorne 1
      } senao {
        retorne 0
      }
  }

  funcao inteiro diasDeCadaMes(inteiro ano, inteiro mes)
  {
    se (mes == 2)
    {
      se (ehBissexto(ano) == 1)
      {
        retorne 29
      } senao {
        retorne 28
      }
    }
    se (mes == 4 ou mes == 6 ou mes == 9 ou mes == 11)
    {
      retorne 30
    } senao {
      retorne 31
    }
  }

  funcao inicio() 
  {
      inteiro dia1 = 1, mes1 = 1, ano1 = 2023, dia2 = 1, mes2 = 1, ano2 = 2024, a
      
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