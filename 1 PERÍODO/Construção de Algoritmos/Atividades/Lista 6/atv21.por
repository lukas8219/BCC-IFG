programa
{
//21) Faça um algoritmo para ler dois vetores V1 e V2 de 15 
//números cada. Calcular e escrever a quantidade de
//vezes que V1 e V2 possuem os mesmos números e nas mesmas posições.

	
	funcao inicio()
	{
		inteiro v1[15]
		inteiro v2[15]
		inteiro count = 0
		
		para (inteiro i = 0; i < 15; i++)
			leia(v1[i])
		para (inteiro i = 0; i < 15; i++)
			leia(v2[i])

		para (inteiro i = 0; i < 15; i++)
		{
			se(v1[i] == v2[i])
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
 * @POSICAO-CURSOR = 410; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */