Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 04/09/2023
Var
// Seção de Declarações das variáveis 
nomeProduto: caracter
quantidadeProduto: inteiro
precoProduto: real
total: real
desconto: real
totalApagar: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Digite o nome do produto")
leia(nomeProduto)
escreval("Digite a quantidade do produto")
leia(quantidadeProduto)
escreval("Digite o preço do produto")
leia(precoProduto)

total <- quantidadeProduto * precoProduto

se(quantidadeProduto <= 5)entao
desconto <- (total * 0.02)
totalApagar <- total - desconto
escreval("O total a pagar ficou no valor de: " ,totalApagar)
fimse

se(quantidadeProduto > 5) e (quantidadeProduto <= 10)entao
desconto <- (total * 0.03)
totalApagar <- total - desconto
escreval("O total a pagar ficou no valor de: " ,totalApagar)
fimse

se(quantidadeProduto > 10)entao
desconto <- (total * 0.05)
totalApagar <- total - desconto
escreval("O total a pagar ficou no valor de: " ,totalApagar)
fimse







Fimalgoritmo