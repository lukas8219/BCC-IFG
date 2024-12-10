programa {

  inclua biblioteca Matematica-->mat
  funcao inicio() 
  {
    real hipotenusa, catetoA, catetoB

    escreva("Insira o valor dos catetos A e B: ")
    leia(catetoA, catetoB)

    hipotenusa = mat.raiz(((catetoA*catetoA) + (catetoB*catetoB)), 2)

    escreva("A hipotenusa é de: ", hipotenusa)

      
  }
}
