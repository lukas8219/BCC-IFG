programa {
  funcao inicio() 
  {
    inteiro num, cen, dez, un
    escreva("Digite um n�mero inteiro de at� 3 digitos: ")
    leia(num)

    cen = num/100
    dez = num%100 - num%10
    un = num%10

    escreva("\t CENTENA: ", cen * 100,"\n")
    escreva("\t DEZENA: ", dez, "\n")
    escreva("\t UNIDADE: ", un, "\n")
  }
}
