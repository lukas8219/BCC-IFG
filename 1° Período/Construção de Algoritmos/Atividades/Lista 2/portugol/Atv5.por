programa {
  funcao inicio() 
  {
    inteiro pequena, media, grande

    escreva("Insira o n�mero de camisetas pequenas, m�dias e grandes desejadas em sequ�ncia: ")
    leia(pequena, media, grande)

    pequena = pequena * 10
    media = media * 12
    grande = grande * 15

    escreva("O valor total � de: ", pequena + media + grande)
  }
}
