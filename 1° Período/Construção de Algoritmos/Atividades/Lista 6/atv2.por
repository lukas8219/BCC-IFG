programa
{
//02) Faça um algoritmo para ler um vetor de 30 números. Após isto, ler mais um número
//qualquer, calcular e escrever quantas vezes esse número aparece no vetor. Para esse
//algoritmo, a busca no vetor de um número deve estar em uma função.

	inteiro tamanho = 30
	funcao inicio()
	{
		inteiro numeros[30]
		inteiro numero

		para (inteiro i = 0; i < tamanho; i++)
		{
			leia(numeros[i])
		}
		leia(numero)
		escreva(frequencia(numeros, numero))
	}

	funcao inteiro frequencia(inteiro numeros[], inteiro numero)
	{
		inteiro frequencia = 0
		para (inteiro i = 0; i < tamanho; i++)
		{
			se (numeros[i] == numero)
			{
				frequencia++
			}
		}
		retorne frequencia
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 255; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */