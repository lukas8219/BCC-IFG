programa
{
//12) Ler um vetor Q de 20 posições (aceitar somente números positivos). 
//Escrever a seguir o valor do maior
//elemento de Q e a respectiva posição que ele ocupa no vetor
	
	funcao inicio()
	{
		inteiro q[20]
		inteiro maior = 0, indice = 0
		para (inteiro i = 0; i < 20; i++)
		{
			leia(q[i])
			se (q[i] > maior)
			{
				maior = q[i]
				indice = i
			}
		}

		escreva(maior, indice)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 288; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */