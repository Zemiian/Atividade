Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 04/09/2023
Var
// Se��o de Declara��es das vari�veis 
nomeProduto: caracter
quantidadeProduto: inteiro
precoProduto: real
total: real
desconto: real
totalApagar: real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreval("Digite o nome do produto")
leia(nomeProduto)
escreval("Digite a quantidade do produto")
leia(quantidadeProduto)
escreval("Digite o pre�o do produto")
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