Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 17/08/2023
Var
// Se��o de Declara��es das vari�veis 
a : inteiro
b: inteiro
soma: inteiro
subtracao: inteiro
divisao: real
multiplicacao: inteiro
resposta: caracter

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc...
//primeiroNumero <- 10
//segundoNumero <- 5
escreval("Digite o primeiro numero")
leia(a)
escreval("Digite o segundo numero")
leia(b)

escreval("escolha:(+,-,*,/)")
leia(resposta)



se(resposta = "+")entao
soma <- a + b
escreval("(+) � igual a:" ,soma )
fimse

se(resposta = "-")entao
subtracao <- a - b
escreval("(-) � igual a: " ,subtracao)
fimse

se(resposta = "*")entao
multiplicacao <- a * b
escreval("(*) � igual a: " ,multiplicacao)
fimse

se(resposta = "/")entao
divisao <- a / b
escreval("(/) � igual a: " ,divisao)
fimse






Fimalgoritmo