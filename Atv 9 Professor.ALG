Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 04/09/2023
Var
// Seção de Declarações das variáveis 
 rendaMensal: real
 valorEmprestimo: real
 numPrestacoes: real
 valorPrestacao: real
 limiteEmprestimo: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Digite sua renda mensal")
leia(rendaMensal)

escreval("Digite o valor total do emprestimo solicitado: ")
leia(valorEmprestimo)

escreval("Digite o números de prestações desejadas: ")
leia(numPrestacoes)

limiteEmprestimo <- rendaMensal * 10
valorPrestacao <- valorEmprestimo / numPrestacoes

se (valorEmprestimo <= limiteEmprestimo) e (valorPrestacao <= 0.3 * rendaMensal) entao
escreval("Emprestimo concedido!")
senao
escreval("Emprestimo não concedido")
fimse

Fimalgoritmo