Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 31/08/2023
Var
// Seção de Declarações das variáveis 
nome: caracter
notaUm: real
notaDois: real
media: real


Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Digite seu nome")
leia(nome)
escreval("Digite sua primeira nota")
leia(notaUm)
escreval("Digite a segunda nota")
leia(notaDois)

media <- (notaUm + notaDois) /2

se(media >= 6)entao
escreval("Parabéns você foi aprovado")
senao
se(media = 4)entao
escreval("Você está em recuperação")
senao
se(media < 4)entao
escreval("Você foi reprovado")
fimse
fimse
fimse


escreval("Sua nota foi:" ,media)


Fimalgoritmo