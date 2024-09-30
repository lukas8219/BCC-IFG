programa
{
//07) Faça um algoritmo que receba 50 valores positivos de um usuário de forma desordenada
//em um vetor. Em seguida, ordene o vetor em ordem crescente. Dica: use um segundo vetor.
	inteiro tamanho = 50
	inteiro numeros[50]
	
	funcao inicio()
	{
		para(inteiro i = 0; i < tamanho; i++)
		{
			leia(numeros[i])
		}
		bubbleSort()
				
		para(inteiro i = 0; i < tamanho; i++)
		{
			escreva(numeros[i])
		}
		
	}

	funcao bubbleSort()
	{
		inteiro temp = 0
		para (inteiro i = 0; i < tamanho - 1; i++)
		{
			para (inteiro j = 0; j < tamanho - 1 - i; j++)
			{
				se(numeros[j] > numeros[j + 1])
				{
					temp = numeros[j]
					numeros[j] = numeros[j + 1]
					numeros[j + 1] = temp
				}
			}
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 235; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */