Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 04/09/2023
Var
// Se��o de Declara��es das vari�veis 
litros: real
valorTotal: real
gasolina: real
alcool: real
tipoCombustivel: caracter

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
Escreval("Digite o n�mero de litros vendidos: ")
Leia(litros)

Escreval("Digite o tipo de combust�vel (A-�lcool, G-gasolina): ")
Leia(tipoCombustivel)

gasolina <- 6.59
alcool <- 3.79

se (tipoCombustivel = "A") ou (tipoCombustivel = "a") entao
   se (litros <= 25) entao
       valorTotal <- (litros*alcool - (alcool*0.02))
   senao
       valorTotal <- (litros*alcool - (alcool*0.04))
   fimse
senao se (tipoCombustivel = "G") ou (tipoCombustivel = "g") entao
   se (litros <= 25) entao
       valorTotal <- (litros*gasolina - (gasolina*0.03))
   senao
       valorTotal <- (litros*gasolina - (gasolina*0.05))
   fimse
fimse

escreva("O valor a ser pago �: R$ ", valorTotal)

Fimalgoritmo