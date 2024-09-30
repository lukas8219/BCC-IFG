programa
{
//03) Defina um vetor de tamanho 40. Agora faça um algoritmo que leia 39 números de forma
//ordenada crescente. Em seguida, leia um número qualquer e coloque ele no vetor de forma
//a manter o ordenamento. Utilize uma função para ordenar.

	inteiro tamanho = 40
	inteiro numeros[40]
	
	funcao inicio()
	{
		inteiro ultimoNumero = 0
		para (inteiro i = 0; i < tamanho - 1; i++)
		{
			leia(numeros[i])
		}
		leia(numeros[tamanho - 1])
		bubbleSort()
		para (inteiro i = 0; i < tamanho; i++)
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
 * @POSICAO-CURSOR = 333; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */