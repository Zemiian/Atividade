#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL ,"portuguese");
	
int bandas[3][200];
int integrantes[5];
int i,j;

for(i = 0; i < 3; i++){
 
printf("\n Digite o nome da banda: ");
scanf("%s" ,&bandas[i]); 

for(j = 0; j < 5; j++){
	
printf("\n Digite os integrantes: ");
scanf("%i" ,&integrantes[j]);
	
}

fflush(stdin);	
}	

for(i = 0; i < 3; i++){

printf("\n Nome das bandas: %s" ,bandas[i]);
	
for(j = 0; j < 5; j++){
printf("\n Integrantes: %s" ,integrantes[j]);	
}	
	
}




return 0;
	
}
