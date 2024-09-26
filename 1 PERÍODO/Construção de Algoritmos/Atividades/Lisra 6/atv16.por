programa
{
//16) Faça um algoritmo para ler um valor N qualquer (que será o tamanho dos vetores). 
//Após, ler dois vetores A e B (de tamanho N cada um) e depois armazenar em um terceiro
//vetor Soma a soma dos elementos do vetor A com os do vetor B (respeitando as mesmas posições) e escrever o vetor Soma.
	
	funcao inicio()
	{
		inteiro n  
		leia(n)
		// em portugol nao funciona, mas o raciocinio esta correto
		inteiro a[n]
		para (inteiro i = 0; i < n; i++)
			leia(a[i])
			
		inteiro b[n]
		para (inteiro i = 0; i < n; i++)
		leia(b[i])
		
		inteiro soma[3]
		para (inteiro i = 0; i < n; i++)
		{
			soma[i] = a[i] + b[i]
			escreva(soma[i])
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 419; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */