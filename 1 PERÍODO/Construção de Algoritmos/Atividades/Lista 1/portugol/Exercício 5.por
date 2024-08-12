
programa {
  inclua biblioteca Matematica -->mat

  funcao inicio() 
  {
      inteiro x1, y1, x2, y2, d
      escreva("P(x1): ")
      leia(x1)

      escreva("P(y1): ")
      leia(y1)

      escreva ("P(x2): ")
      leia(x2)

      escreva("P(y2): ")
      leia(y2)

      d=raiz.mat((x2 - x1)^2 + (y2 - y1)^2)
      escreva("A distãncia entre os dois pontos é de: ", d, "\n")

  }
}
