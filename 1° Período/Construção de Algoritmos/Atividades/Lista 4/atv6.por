programa
{
	funcao inicio()
	{
		leitura(3)
	}

	funcao leitura(inteiro vezes)
	{
		se (vezes > 0)
		{
			inteiro cod = 0, anoNas = 0, anoIng = 0
			escreva("Insira codigo, ano de nascimento e ano de entrada na empresa: ")
			leia(cod, anoNas, anoIng)
			ehQualificado(cod, anoNas, anoIng)
			leitura(vezes - 1)
		}
	}

	funcao ehQualificado (inteiro cod, inteiro anoNas, inteiro anoIng)
	{
		se ((2024 - anoNas) > 65)
		{
			escreva("Funcionario: ", cod, " Idade: ", 2024 - anoNas , " Tempo de Trabalho: ", 2024 - anoIng , " Requerer aposenadoria") 
		}
		senao se ((2024 - anoIng) > 30)
		{
			escreva("Funcionario: ", cod, " Idade: ", 2024 - anoNas , " Tempo de Trabalho: ", 2024 - anoIng , " Requerer aposenadoria") 
		}
		senao se ((2024 - anoNas) > 60 e (2024 - anoIng) > 25)
		{
			escreva("Funcionario: ", cod, " Idade: ", 2024 - anoNas , " Tempo de Trabalho: ", 2024 - anoIng , " Requerer aposenadoria") 
		} 
		senao {
			escreva("Funcionario: ", cod, " Idade: ", 2024 - anoNas , " Tempo de Trabalho: ", 2024 - anoIng , " Não requerer aposenadoria") 
		}
	}


//Uma empresa quer verificar se um empregado está qualificado para a aposentadoria ou não.
//Para estar em condições, um dos seguintes requisitos deve ser satisfeito:
//- Ter no mínimo 65 anos de idade; ou
//- Ter trabalhado no mínimo 30 anos; ou
//- Ter no mínimo 60 anos e ter trabalhado no mínimo 25 anos.
//Com base nas informações acima, faça um algoritmo que leia: o número do empregado
//(código), o ano de seu nascimento e o ano de seu ingresso na empresa. O programa deverá
//escrever a idade e o tempo de trabalho do empregado e a mensagem 'Requerer
//' ou 'Não requerer'. Seu algoritmo deve funcionar para 4 funcionários.
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 320; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */