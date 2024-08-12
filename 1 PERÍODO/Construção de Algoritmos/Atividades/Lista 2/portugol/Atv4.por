programa {
  funcao inicio() 
  {
    inteiro numA, numB, numC, numD, numE, numF, x, y

    escreva("Insira os coeficientes a, b, c, d, e, f, sem sequência, separando-os por enter: ")
    leia(numA, numB, numC, numD, numE, numF)

    x = (numC*numE - numB*numF)/(numA*numE - numB*numD)
    y = (numA*numF - numC*numD)/(numA*numE - numB*numD)

    escreva("x: ", x, " y: ", y)

  }
}
