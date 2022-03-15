Algoritmo "EXE_3"

Var
soma,contador: real

Inicio
  soma <- 0
  ENQUANTO contador <> 130 FACA
   soma <- contador+soma
   se soma >0 entao
     escreval("soma parcial: ",soma)
   fimse
   
   escreval("Digite 130 para parar a soma.")
   escreval("Digite um valor para somar")

   leia(contador)

   FIMENQUANTO

  escreval("Valor final da soma: ",(soma))

Fimalgoritmo
