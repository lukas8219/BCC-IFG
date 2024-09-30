programa
{
//06) Um somatório dos vizinhos acontece sempre que um número é acrescido de seus vizinhos
//mais próximos laterais. Faça um algoritmo que leia um vetor de tamanho 50. Após ter lido
//todos os elementos, some para cada elemento: elemento + primeiro vizinho à esquerda +
///primeiro vizinho a direita. No caso do primeiro elemento e do último elemento do vetor, o
//primeiro elemento será somente a soma do elemento com o seu vizinho à direita e o último
//será a soma do elemento com o seu vizinho a esquerda. Um exemplo para o algoritmo é:
//1- Vetor EXEMPLO [1][3][4][7]
//2- O vetor é alterado e o resultado é: Vetor [4][8][14][11]
	
	funcao inicio()
	{
		inteiro tamanho = 50
		inteiro vetor[50]
		inteiro resultado[50]

		para (inteiro i = 0; i < tamanho; i++)
		{
			leia(vetor[i])
		}

		para (inteiro i = 0; i < tamanho; i++)
		{
			se (i == 0)
			{
				resultado[i] = vetor[i] + vetor[i + 1]
			} senao se (i == (tamanho - 1)) {
				resultado[i] = vetor[i] + vetor[i - 1]
			} senao {
				resultado[i] = vetor[i] + vetor[i + 1] + vetor[i - 1]
			}
		}

		para (inteiro i = 0; i < tamanho; i++) 
		{
			escreva(resultado[i])
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 738; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */