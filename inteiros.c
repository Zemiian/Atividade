#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

int main(){

int num, i;
int soma = 0;

for ( i = 1; i <=5; i++){
printf("\nDigite o %dº numero: ",i);
scanf("%d" ,&num);    
soma += num; 

}

printf("\nSoma %d: ",soma);


}