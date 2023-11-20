#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
char nomes [2][200];
float notas [2][3];	
int i,j,k,soma=0;	
float media[3];
	
for(i = 0; i < 2; i++){
	
	printf("\n Digite o nome do aluno: ");
	scanf("%s" ,&nomes[i]);
	
	for(j = 0; j < 3; j++){
		printf("\n Digite a nota do aluno: ");
		scanf("%f" ,&notas[i][j]);	
		
		soma += notas[i][j];
	}
	
	media[i] = soma / j;	
	soma = 0;
	fflush(stdin);
}

system("cls");

for(i = 0; i < 2; i++){
	printf("\n \n Nome: %s" ,nomes[i]);
		
	for(j = 0; j < 3; j++){
		printf("\n \n Notas: %1.f" ,notas[i][j]);	
	}	
	
printf("\n \n Média: %1.f" ,media[i]);
	
}
	
return 0;		
}
