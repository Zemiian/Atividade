Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 17/08/2023
Var
// Seção de Declarações das variáveis 
a : inteiro
b: inteiro
soma: inteiro
subtracao: inteiro
divisao: real
multiplicacao: inteiro
resposta: caracter

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
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
escreval("(+) é igual a:" ,soma )
fimse

se(resposta = "-")entao
subtracao <- a - b
escreval("(-) é igual a: " ,subtracao)
fimse

se(resposta = "*")entao
multiplicacao <- a * b
escreval("(*) é igual a: " ,multiplicacao)
fimse

se(resposta = "/")entao
divisao <- a / b
escreval("(/) é igual a: " ,divisao)
fimse






Fimalgoritmo