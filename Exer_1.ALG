Algoritmo "exe_1"

Var
media,in:real

Inicio
in <-1
media <- 0
    repita

      repita

      escreval("digite a media do aluno: ")

      leia(media)

      se (media >= 7) e (media < 11) entao
      escreval("Aluno aprovado!!")
      fimse
      se  (media < 7) e (media>=0) entao
        escreval("Aluno reprovado")
      fimse

      ate((media < 0) ou (media > 10))
     escreval ("Valor invalido digite uma media entre 0 e 10!!")

    ate(in = 0)


Fimalgoritmo
