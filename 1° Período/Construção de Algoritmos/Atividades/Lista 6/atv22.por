programa
{
//22) Faça um algoritmo para ler um vetor de 30 números. 
//Após isto, ler mais um número qualquer, calcular e
//escrever quantas vezes esse número aparece no vetor.
	
	funcao inicio()
	{
		inteiro vetor[30]
		inteiro n = 0, count = 0

		para (inteiro i = 0; i < 30; i++)
			leia(vetor[i])
		leia(n)

		para (inteiro i = 0; i < 30; i++)
		{
			se(vetor[i] == n)
				count++
		}

		escreva(count)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 389; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */