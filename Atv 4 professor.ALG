Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 31/08/2023
Var
   // Se��o de Declara��es das vari�veis
   precoMorango: real
   precoMaca: real
   desconto: real
   quantidadeMorango: inteiro
   quantidadeMaca: inteiro
   precofinalMaca: real
   precofinalMorango: real
   valorTotal: real
   valorTotal2: real
   quantidadeTotalTres: inteiro


Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   escreval("Digite a quantidade de morango")
   leia(quantidadeMorango)
   escreval("Digite a quantidade de maca")
   leia(quantidadeMaca)

   se(quantidadeMorango <= 5)entao
      precoMorango <- 2.50
      quantidadeTotal <- quantidadeMorango * precoMorango
      escreval("O valor da compra dos morangos � igual a: " ,quantidadeTotal)
   senao

      precoMorango <- 2.20
      precofinalMorango <- quantidadeMorango * precoMorango
      escreval("O valor da compra das ma�as � igual a: ",precofinalMorango)

   fimse

   se(quantidadeMaca <= 5)entao
      precoMaca <- 1.80
      precofinalMaca <- quantidadeMaca * precoMaca
      escreval("O valor da compra das ma�as � igual a: " ,precofinalMaca)
   senao

      precoMaca <- 1.50
      precofinalMaca <- quantidadeMaca * precoMaca
      escreval("O valor da compra das ma�as � igual a: ", precofinalMaca)

   fimse

   valorTotal <- precofinalMorango + precofinalMaca
   quantidadeTotalTres <- quantidadeMaca + quantidadeMorango
   desconto <- (valorTotal * 0.10)
   valorTotal2 <- valorTotal - desconto

   se(quantidadeTotalTres > 8) ou (valorTotal > 25)entao
      escreval("O valor total ap�s o desconto � igual a: ", valorTotal2)
   senao
      escreval("O valor total � igual a: " ,valorTotal)
   fimse





Fimalgoritmo