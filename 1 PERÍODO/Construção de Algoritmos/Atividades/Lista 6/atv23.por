programa
{
//23) Faça um algoritmo para ler 50 números e 
//armazenar em um vetor VET, verificar e escrever se existem
//números repetidos no vetor VET e em que posições se encontram.
	
	funcao inicio()
	{
		inteiro vet[5]
		para (inteiro i = 0; i < 5; i++)
			leia(vet[i])

		para (inteiro i = 0; i < 5; i++)
		{
			para (inteiro j = i + 1; j < 5; j++)
			{
				se(vet[i] == vet[j])
				{
					escreva("Número ", vet[i], " repetido nas posições ", i, " e ", j, "\n")
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
 * @POSICAO-CURSOR = 348; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */