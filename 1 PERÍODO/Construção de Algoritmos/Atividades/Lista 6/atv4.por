programa
{
//4. Criptografia é uma das formas mais antigas de ocultar informações. Faça um algoritmo
//que leia um vetor de 10 valores. Some a cada um dos 10 campos o valor referente a soma de
//valores de todo o vetor. Em seguida, some a cada campo o valor de endereço do campo. Ao
//fim, cada campo será alterado para: o valor do campo + o somatório de todos os valores +
//valor de endereço. É obrigatório o uso de somente um vetor. Imprima o vetor resultante no
//final. Veja o exemplo:
//1- Vetor EXEMPLO [2][3][4][7][23][9][6][11][3][2]
//2- O somatório do vetor é: 70
//3- O vetor é alterado e o resultado é:
//Vetor [72][74][75][78][97]….
	
	funcao inicio()
	{
		inteiro tamanho = 10, soma = 0
		inteiro numeros[10]

		para (inteiro i = 0; i < tamanho; i++)
		{
			leia(numeros[i])
			soma += numeros[i]
		}

		para(inteiro i = 0; i < tamanho; i++)
		{
			numeros[i] = numeros[i] + soma + i
			escreva(numeros[i])
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 776; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */