programa
{
//01) Faça um algoritmo para ler e armazenar em um vetor a temperatura de todos os dias do
//ano. Em seguida, faça uma função para cada tarefa:
//a) Informar a menor temperatura do ano;
//b) Informar a maior temperatura do ano;
//c) Informar a temperatura média anual;
//d) Informar o número de dias do ano em que a temperatura foi acima da média anual.

	inteiro ano = 365
	
	funcao inicio()
	{
		real diasDoAno[365]
		para (inteiro i = 0; i < ano; i++)
		{
			leia(diasDoAno[i])
		}
		escreva(menorTemp(diasDoAno))
		escreva(maiorTemp(diasDoAno))
		escreva(mediaTemp(diasDoAno))
		escreva(diasAcimaMedia(diasDoAno))
	}

	funcao real menorTemp(real diasDoAno[])
	{
		real menorTemp = diasDoAno[0]
		para (inteiro i = 0; i < ano; i++)
		{
			se (menorTemp > diasDoAno[i])
			{
				menorTemp = diasDoAno[i]
			}
		}
		retorne menorTemp
	}

	funcao real maiorTemp(real diasDoAno[])
	{
		real maiorTemp = diasDoAno[0]
		para (inteiro i = 0; i < ano; i++)
		{
			se (maiorTemp < diasDoAno[i])
			{
				maiorTemp = diasDoAno[i]
			}
		}
		retorne maiorTemp
	}

	funcao real mediaTemp(real diasDoAno[])
	{
		real media = 0
		para (inteiro i = 0; i < ano; i++)
		{
			media += diasDoAno[i]
		}
		media /= ano
		retorne media
	}

	funcao inteiro diasAcimaMedia(real diasDoAno[])
	{
		real media = mediaTemp(diasDoAno)
		inteiro dias = 0
		para (inteiro i = 0; i < ano; i++)
		{
			se (diasDoAno[i] > media)
			{
				dias++
			}
		}
		retorne dias
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 367; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */