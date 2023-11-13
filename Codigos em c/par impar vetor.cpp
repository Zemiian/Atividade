#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
int i;
int notas[6];
int par=0,impar=0;


for(i = 0; i < 6; i++){
	
printf("\n Digite a %iº nota: " ,i + 1);
scanf("%i" ,&notas[i]);
	
	
}	
	
	
for(i = 0; i < 6; i++){
	
printf("\n Notas : %i" ,notas[i]);	

if(notas[i] % 2 == 0){
par++;	
} else if (notas[i] % 2 == 1){
impar++;}

}


printf("\n Quantidade de números pares: %i" ,par);
printf("\n Quantidade de números ímpares: %i" ,impar);

return 0;
}
