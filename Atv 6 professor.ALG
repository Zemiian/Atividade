Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 31/08/2023
Var
// Se��o de Declara��es das vari�veis 
nome: caracter
notaUm: real
notaDois: real
media: real


Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreval("Digite seu nome")
leia(nome)
escreval("Digite sua primeira nota")
leia(notaUm)
escreval("Digite a segunda nota")
leia(notaDois)

media <- (notaUm + notaDois) /2

se(media >= 6)entao
escreval("Parab�ns voc� foi aprovado")
senao
se(media = 4)entao
escreval("Voc� est� em recupera��o")
senao
se(media < 4)entao
escreval("Voc� foi reprovado")
fimse
fimse
fimse


escreval("Sua nota foi:" ,media)


Fimalgoritmo