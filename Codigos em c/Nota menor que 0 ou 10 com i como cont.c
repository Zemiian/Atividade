#include <stdio.h>
#include <stdlib.h>

int main(){
	
float nota = 0, media = 0;
int i = 0, soma = 0;

for(i = 0; i <=2; i++){
do{
printf("\nDigite a %i nota: " ,i+1);	
scanf("%f",&nota);
soma += nota;
}while(nota <= 0 || nota > 10 );	
}	
media = soma / i;
if(media >= 7){
printf("\nVoce foi aprovado!");	
} else if(media >= 5){
printf("\nVoce esta em recuperacao!");	
} else{
printf("\nVoce foi reprovado!");	
}	
		


printf("\nSua media eh igual a: %.1f" ,media);

	
return 0;	
	
	
/* Pode usar o contador declarando ele como int cont= 0
   Ele precisa ir dentro do for, e faz o seguinte : cont = i
   Dessa forma, o contador vai contar a quantidade de n�meros declarados no for, ou a quantidade q o usu�rio digitar
   media = soma / contador 
   printf("informa��o" ,contador);
*/
}




