#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
int i;
float media;
int notas[3];
int soma;


for(i = 0; i < 5; i++){
	
printf("\n Digite a %iº nota: " ,i + 1);
scanf("%i" ,&notas[i]);

soma += notas[i];	
	
}	
	
	
for(i = 0; i < 5; i++){
	
printf("\n Notas : %i" ,notas[i]);	

}

media = soma / i;

printf("\n Média : %.1f " ,media);

if(notas[0] > notas[1] && notas[0] > notas[2] && notas[0] > notas[3] && notas[0] > notas[4] ){
printf("\n Maior número: %i" ,notas[0]);	
} else if(notas[1] > notas[0] && notas[1] > notas[2] && notas[1] > notas[3] && notas[1] > notas[4]){
printf("\n Maior número: %i" ,notas[1]);	
} else if(notas[2] > notas[0] && notas[2] > notas[1] && notas[2] > notas[3] && notas[2] > notas[4]){
printf("\n Maior número: %i" ,notas[2]);
} else if(notas[3] > notas[0] && notas[3] > notas[1] && notas[3] > notas[2] && notas[0] > notas[4]){
printf("\n Maior número: %i" ,notas[3]);	
} else if(notas[4] > notas[0] && notas[4] > notas[1] && notas[4] > notas[2] && notas[4] > notas[3]){
printf("\n Maior número: %i" ,notas[4]);	
}

// Da pra simplificar E MUITO essa aberração daí de cima
// maior = notas[i] > maior ? notas[i] : maior;
// menor = notas[i] < menor ? notas[i] : menor;

return 0;

}
