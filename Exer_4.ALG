Algoritmo "EXE_4"

Var
soma,valor,media,contador: real

Inicio
  soma <- 0
  contador <-0

  ENQUANTO valor <> 125 FACA

   soma <- valor+soma
   contador <- contador + 1

   se soma >0 entao
     escreval("soma parcial: ",soma)
   fimse

   escreval("Digite um valor para somar.")
   escreval("Digite 125 para parar sair e mostrar o resultado:")
   escreval("")

   leia(valor)

   FIMENQUANTO
  media <- soma/(contador -1)
  escreval("")
  escreval("Valor final da soma dos",(contador-1)," numeros é ",soma)
  escreval("Valor final da media dos",(contador-1)," numeros é ",media)

Fimalgoritmo
