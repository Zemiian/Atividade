#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string>

int main(){
setlocale(LC_ALL, "portuguese");

float pesoIdeal;
char sexo;
float altura;

printf("\nInforme seu sexo: ");
scanf("%c" ,&sexo);

printf("Digite sua altura: ");
scanf("%f" ,&altura);

//converter o char em maiúsculo
sexo = toupper(sexo);

switch (sexo)
{
case 'M':

    break;

default:
    break;
}


}