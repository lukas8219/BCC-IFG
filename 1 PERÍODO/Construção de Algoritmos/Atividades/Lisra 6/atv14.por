programa
{
//14) Ler um vetor A de 10 números. Após, ler mais um número 
//e guardar em uma variável X. Armazenar em um vetor M o resultado 
//de cada elemento de A multiplicado pelo valor X. Logo após, imprimir o vetor M.
	
	funcao inicio()
	{
		inteiro a[10]
		inteiro x
		inteiro b[10]

		para(inteiro i = 0; i < 10; i++)
		{
			leia(a[i])
		}
		leia(x)

		para(inteiro i = 0; i < 10; i++)
		{
			b[i] = a[i] * x
			escreva(b[i])
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 391; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */