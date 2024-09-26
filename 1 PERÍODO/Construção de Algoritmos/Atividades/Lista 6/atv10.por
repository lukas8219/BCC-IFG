programa
{
	//10) Escreva um algoritmo que permita a leitura dos nomes de 10 pessoas e armazene os nomes lidos em um
	//vetor. Após isto, o algoritmo deve permitir a leitura de mais 1 nome qualquer de pessoa e depois escrever a
	//mensagem ACHEI, se o nome estiver entre os 10 nomes lidos anteriormente (guardados no vetor), ou NÃO
	//ACHEI caso contrário.

	funcao inicio()
	{
		inteiro n = 3
		cadeia nomes[11] 

		escreva("Insira 10 nomes: ")
		para (inteiro i = 0; i < n; i++)
		{
			leia(nomes[i])
		}
		escreva("Insira mais um nome: ")
		leia(nomes[10])

		inteiro flag = 0
		para (inteiro i = 0; i < n; i++)
		{
			se (nomes[10] == nomes[i])
			{
				flag = 1
			}
		}

		se (flag == 1)
			escreva("ACHEI")
		senao 
			escreva("NAO ACHEI")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 751; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */