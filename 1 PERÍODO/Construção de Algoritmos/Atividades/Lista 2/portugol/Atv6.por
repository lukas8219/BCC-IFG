programa {
  funcao inicio() 
  {
  inteiro tempo, ano, mes, dia

  escreva("Insira o tempo de tranbalho em dias: ")
  leia(tempo)

  ano = tempo/360
  mes = (tempo%360) / 30
  dia = (tempo%360) % 60

  escreva("Estamo a ", ano, " ano, ", mes, " meses e ", dia, " dias sem acidentes de trabalho")
  
  }
}
