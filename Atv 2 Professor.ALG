Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 29/08/2023
Var
// Se��o de Declara��es das vari�veis 
nome: caracter
sexo: caracter
estadoCivil: caracter
tempoCasada: caracter


Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
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


escreval("Voc� est� casada a: " ,tempoCasada)


Fimalgoritmo