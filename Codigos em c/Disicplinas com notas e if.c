#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
char disciplinas [3][200];
float notas [2][2];	
int i,j,soma=0;	
int k;
float media[2];
	
for(i = 0; i < 3; i++){
	
	printf("\n Digite o nome da disciplina: ");
	scanf("%s" ,&disciplinas[i]);
	
	for(j = 0; j < 2; j++){
		printf("\n Digite a nota do aluno: ");
		scanf("%f" ,&notas[i][j]);	
		
		soma += notas[i][j];
	}
	
	media[i] = soma / j;	
	soma = 0;
	fflush(stdin);
}

system("cls");

for(i = 0; i < 3; i++){
	printf("\n \n %iº Disciplina: %s" ,k + 1,disciplinas[i]);
		
	for(j = 0; j < 2; j++){
		printf("\n \n Notas: %1.f" ,notas[i][j]);	
	}	
	
printf("\n \n Média: %1.f" ,media[i]);

if(media[i] >= 7){
printf("\n Aprovado");	
} else if(media >= 5){
printf("\n Recuperação");
}else{
printf("\n Reprovado")	
}
}
}








	

