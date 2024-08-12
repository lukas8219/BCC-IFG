programa {
  funcao inicio() 
  {
        inteiro segundos, hr, min, sec
        escreva("Insira tempo de duração em segundos: ")
        leia(segundos)

        hr = segundos/3600
        min = (segundos%3600) / 60
        sec = (segundos%3600)%60
        
        escreva("O tempo foi de: ", hr, "h", min, "m", sec, "s")

    
  }
}
