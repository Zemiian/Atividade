#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string>

int main(){

setlocale(LC_ALL, "portuguese");

//int pagamentoAprazo;
//int pagamentoAvista;
float valorProduto;
int opcao, parcelas;
float desconto, precoFinal;

printf ("Digite o valor do produto");
scanf("f" , &valorProduto);

printf("Escolha uma das opções abaixo: \n");
printf("1- Pagamento á vista \n");
printf("2 - Pagamento á prazo \n");
printf("Digite a opção desejada: ");
scanf("%i" ,&opcao);

switch(opcao)
{
case 1:
desconto = valorProduto *0.1;
precoFinal = valorProduto - desconto;
printf("Valor do produto: R$ %.2f \n" ,valorProduto);




}














}