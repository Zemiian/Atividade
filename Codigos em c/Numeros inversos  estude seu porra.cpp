#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL ,"portuguese");
	
int i;
int numeros[6];


for(i = 0 ; i < 6; i++){

do{

printf("\n Digite o %i� n�mero: " ,i + 1);
scanf("%i" ,&numeros[i]);

}while(numeros[i] % 2 != 0 || numeros[i] < 0);

	
}
for(i = 6; i >= 0; i--){
if(numeros[i] % 2 == 0){
printf("\n N�meros: %i" ,numeros[i]);
}
}
return 0;	
	
}
