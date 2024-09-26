programa
{
//O mesmo exercício anterior, mas agora deve escrever o menor elemento do vetor e 
//a respectiva posição dele nesse vetor.

	funcao inicio()
	{
		inteiro q[10]
		inteiro menor  = 0, indice = 0

		leia(q[0])
		menor = q[0]
		para (inteiro i = 1; i < 10; i++)
		{
			leia(q[i])
			se (q[i] < menor)
			{
				menor = q[i]
				indice = i
			}
		}

		escreva(menor, indice)
	}

}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 266; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */