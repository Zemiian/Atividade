Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 04/09/2023
Var
// Seção de Declarações das variáveis 
litros: real
valorTotal: real
gasolina: real
alcool: real
tipoCombustivel: caracter

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
Escreval("Digite o número de litros vendidos: ")
Leia(litros)

Escreval("Digite o tipo de combustível (A-álcool, G-gasolina): ")
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

escreva("O valor a ser pago é: R$ ", valorTotal)

Fimalgoritmo