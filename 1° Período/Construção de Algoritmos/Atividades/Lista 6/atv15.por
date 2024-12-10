programa
{
//15) Faça um algoritmo para ler 20 números e 
//armazenar em um vetor. Após a leitura total dos 20 números, o
//algoritmo deve escrever esses 20 números lidos na ordem inversa.

	funcao inicio()
	{
		inteiro vetor[10]
		para (inteiro i = 0; i < 10; i++)
		{
			leia(vetor[i])
		}
		para (inteiro i = 9; i != 0; i--)
		{
			escreva(vetor[i])
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 191; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */