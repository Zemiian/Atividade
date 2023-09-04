Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 29/08/2023
Var
// Seção de Declarações das variáveis 
nome: caracter
sexo: caracter
estadoCivil: caracter
tempoCasada: caracter


Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Digite seu nome:")
leia(nome)
escreval("Digite seu sexo:")
leia(sexo)
escreval("Digite seu estado civil:")
leia(estadoCivil)

se(sexo = "Feminino") e (estadoCivil = "Casada")entao
escreval("Digite o tempo de casada")
leia(tempoCasada)
fimse


escreval("Você está casada a: " ,tempoCasada)


Fimalgoritmo