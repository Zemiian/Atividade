Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 04/09/2023
Var
// Se��o de Declara��es das vari�veis 
 rendaMensal: real
 valorEmprestimo: real
 numPrestacoes: real
 valorPrestacao: real
 limiteEmprestimo: real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreval("Digite sua renda mensal")
leia(rendaMensal)

escreval("Digite o valor total do emprestimo solicitado: ")
leia(valorEmprestimo)

escreval("Digite o n�meros de presta��es desejadas: ")
leia(numPrestacoes)

limiteEmprestimo <- rendaMensal * 10
valorPrestacao <- valorEmprestimo / numPrestacoes

se (valorEmprestimo <= limiteEmprestimo) e (valorPrestacao <= 0.3 * rendaMensal) entao
escreval("Emprestimo concedido!")
senao
escreval("Emprestimo n�o concedido")
fimse

Fimalgoritmo