#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL,"portuguese");

int i;
int notas[3];
float media;
int soma;

for(i = 0; i < 3; i++){

printf("\n Digite sua %iº nota :" ,i+1);
scanf("%i" ,&notas[i]);	
soma += notas[i];
}

for(i = 0; i < 3; i++){
printf("\n Nota informada : %i" ,notas[i]);

}


media = soma / i;

printf("\n Média : %.1f" ,media);

return 0;
	
}
