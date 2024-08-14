programa
{
	
	funcao inicio()
	{
		inteiro cpf = 123456789
		
		inteiro soma = somaPonderada(cpf, 1)

		se ((soma % 11) == 1 ou (soma % 11) == 0)
		{
			cpf *= 10
		} senao {
			cpf = (cpf * 10) + (11 - (soma % 11))
		}

		soma = somaPonderada(cpf, 2)
		se ((soma % 11) == 1 ou (soma % 11) == 0)
		{
			escreva(cpf, "0")
		} senao {
			escreva(cpf, (11 - (soma % 11)))
		}
	}

	funcao inteiro somaPonderada (inteiro cpf, inteiro n)
	{
		inteiro n1 = (cpf%10) * 2
		inteiro n2 = ((cpf%100)/10) * 3 
		inteiro n3 = ((cpf%1000)/100) * 4 
		inteiro n4 = ((cpf%10000)/1000) * 5 
		inteiro n5 = ((cpf%100000)/10000) * 6 
		inteiro n6 = ((cpf%1000000)/100000) * 7 
		inteiro n7 = ((cpf%10000000)/1000000) * 8 
		inteiro n8 = ((cpf%100000000)/10000000) * 9 
		inteiro n9 = ((cpf%1000000000)/100000000) * 10

		se (n == 1)
		{
			retorne n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9
		} senao {
			inteiro n10 = (cpf/1000000000) * 11
			retorne n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10
		}
	}

//1. Calcule a soma dos produtos dos nove dígitos utilizando peso 2 para unidade, peso 3 para
//dezena, peso 4 para centena e assim sucessivamente. Exemplo:
//9*2+8+1*1*3+7*4+6*5+5*6+4*7+3*8+2*90 = 210
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 353; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */