programa
{
//20) Faça um algoritmo para ler um vetor de 20 números. Após isto, 
//deverá ser lido mais um número qualquer e verificar se esse número 
//existe no vetor ou não. Se existir, o algoritmo deve gerar um novo vetor sem esse
//número. (Considere que não haverão números repetidos no vetor).
	
	funcao inicio()
	{
		inteiro vetor[20]
		inteiro n = 0
		para (inteiro i = 0; i < 20; i++)
		{
			leia(vetor[i])
		}
		leia(n)

		inteiro tem = 0 // nao ta la
		para (inteiro i = 0; i < 20; i++)
		{
			se(vetor[i] == n)
			{
				tem = n // ta la sim
			}
		}

		se (tem != 0)
		{
			inteiro novoVetor[19]
			inteiro j = 0
			para (inteiro i = 0; i < 20; i++)
			{
				se(vetor[i] != n)
				{
					novoVetor[j] = vetor[i]		
					j++
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
 * @POSICAO-CURSOR = 745; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */