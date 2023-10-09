#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

int main(){
setlocale(LC_ALL, "portuguese");

int i, numero;


printf("Digite um número");
scanf("%d" ,&numero);
//para i de 1 até 10 faça
//tabuada de 3, 5 e 7
for ( i = 1; i <= 10; i++){

printf("%d x %d = %d \n " ,i,numero, i*numero);
printf("\n");
}
}