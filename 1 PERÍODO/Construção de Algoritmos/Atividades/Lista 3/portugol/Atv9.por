programa {

  funcao inteiro ehBissexto (inteiro ano)
  {
      se ((ano % 400 == 00) ou ((ano % 4 == 0) e (ano % 100 != 0)))
      {
          retorne 1
      } senao {
          retorne 0
      }
  }

  funcao inteiro calcularDiaNoMes(inteiro mes, inteiro ano)
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
    
    inteiro anoNas = 2002, mesNas = 1, diaNas = 26, anoAt = 2024, mesAt = 3, diaAt = 27, diasTotais = 0

    para (inteiro ano = (anoNas + 1); ano <= (anoAt - 1); ano++) // calcula os dias de anos completos
    {
    	 se (ehBissexto(ano) == 1)
    	 {
    	 	diasTotais += 366
    	 } senao
    	 {
    	 	diasTotais += 365
    	 }
    }
    
    para (inteiro mes = mesNas; mes <= 12; mes++) // calcula a quantidade de dias em meses completos a partir do nascimento
    {
      se (mes > 0)
      diasTotais += calcularDiaNoMes(mes, anoNas)
    }

    para (inteiro mes = 1; mes < mesAt; mes++) // calcula a quantidade de dias em meses completos 1 mes após o mes atual
    {
      se (mes > 0)
	    diasTotais += calcularDiaNoMes(mes, anoAt)
    }
    
    diasTotais = diasTotais - diaNas + diaAt
    escreva(diasTotais)
  }
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 559; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {ano, 3, 37, 3}-{mes, 13, 42, 3}-{diasTotais, 35, 89, 10};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */