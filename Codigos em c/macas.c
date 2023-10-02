#include<stdio.h>
#include<locale.h>
int main(){

setlocale(LC_ALL, "portuguese");

int maca , quantidadeMaca;

printf("Digite a quantidade que deseja comprar: ");
scanf("%i" ,&quantidadeMaca);

if(quantidadeMaca < 12)
{

maca = 1.30 * quantidadeMaca;
}
else
{

maca = 1 * quantidadeMaca;

}

printf("\nTotal de maças: %i" ,quantidadeMaca);
printf("\nValor total %i: " ,maca);

//return 0;

}