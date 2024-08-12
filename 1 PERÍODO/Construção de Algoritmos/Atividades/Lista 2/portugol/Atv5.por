programa {
  funcao inicio() 
  {
    inteiro pequena, media, grande

    escreva("Insira o número de camisetas pequenas, médias e grandes desejadas em sequência: ")
    leia(pequena, media, grande)

    pequena = pequena * 10
    media = media * 12
    grande = grande * 15

    escreva("O valor total é de: ", pequena + media + grande)
  }
}
