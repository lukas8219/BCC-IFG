//)O Governador do Estado de Goi�s convocou voc� para informar a porcentagem de votos
//brancos, nulos e v�lidos de 3 cidades. Escreva um algoritmo modularizado (tipo sub-rotina)
//para ler o n�mero total de eleitores de um munic�pio, o n�mero de votos brancos, nulos e
//v�lidos. Calcular e escrever o percentual que cada um representa em rela��o ao total de
//eleitores.
 
programa {
  funcao inicio() {
    inteiro branco = 0, nulo = 0, valido = 0, total = 0
    escreva("insira votos brancos, nulos e validos: ")
    leia(branco, nulo, valido)
    total = branco + nulo + valido

    escreva("Brancos: ", percentual(total, branco), "%\n")
    escreva("Nulos: ", percentual(total, nulo), "%\n")
    escreva("Validos: ", percentual(total, valido), "%")
  }

funcao real percentual (inteiro total, inteiro tipo) {
  real percentual = (tipo / total) * 100
  retorne percentual
}
}

