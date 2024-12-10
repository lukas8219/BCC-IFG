programa
{
//A criptografia só é completa quanto temos um processo que oculta as informações e outro
//processo (destino) responsável por descriptografar as informações, ou seja, conhece a regra
//inicial. Baseado no algoritmo construído no exercício anterior, faça um algoritmo que utilize
//uma função para descriptografar um vetor. Para isso, você terá que criar um algoritmo que lê
//um vetor de 10 posições e lê um valor chamado chave. Esse valor chave é o somatório dos
//elementos do vetor original, e será fornecido ao algoritmo. No exemplo anterior o valor chave
//é 70. O algoritmo lê o vetor e o valor chave, então passa para a função que irá retornar o
//vetor descriptografado. Junte os exercícios 04 e 05 em um mesmo algoritmo, mas usando
//funções diferentes.

	funcao inicio()
	{
		inteiro tamanho = 10, chave = 0
		inteiro numeros[10]

		para (inteiro i = 0; i < tamanho; i++)
		{
			leia(numeros[i])
		}
		leia(chave)

		para (inteiro i = 0; i < tamanho; i++)
		{
			numeros[i] = numeros[i] - chave - i
			escreva(numeros[i])
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 854; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */