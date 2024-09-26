programa
{
//) Escreva um algoritmo que permita a leitura das notas de uma turma de 20 alunos. 
//Calcular a média da turma e contar quantos alunos obtiveram nota acima desta média
//calculada. Escrever a média da turma e o resultado da contagem.

	funcao inicio()
	{
		inteiro n = 4, count = 0
		real media = 0.0
		real notas[10]

		para (inteiro i = 0; i < 10; i++)
		{
			leia(notas[i])
			media = media + notas[i]
		}
		
		media = media / 10

		para (inteiro i = 0; i < 10; i++)
		{
			se (notas[i] > media)
			{
				count++
			}
		}
		escreva(media, count)
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 566; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */