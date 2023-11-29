#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct info{
	
char nome[200];
char dataDeNascimento[200];
int rg;	
int cpf;

};

int main(){
	setlocale(LC_ALL ,"portuguese");

int i;

struct info dados[5];

for(i = 0; i < 5; i++){
	
printf("\n Digite o nome: ");
gets(dados[i].nome);
	
printf("\n Digite a data de nascimento: ");
gets(dados[i].dataDeNascimento);	
	
printf("\n Digite o Rg: ");
scanf("%i" ,&dados[i].rg);	

	
printf("\n Digite o cpf: ");
scanf("%i" ,&dados[i].cpf);	
	
fflush(stdin);
		
}

system("cls || clear");

printf("Exibindo as informações do usuário: ");

for(i = 0; i < 5; i++){

printf("\n Nomes: %s" ,dados[i].nome);
printf("\n Data de nascimento: %s" ,dados[i].dataDeNascimento);	
printf("\n Rg: %i" ,dados[i].rg);	
printf("\n Cpf: %i" ,dados[i].cpf);	
	
}


return 0;
	
}
