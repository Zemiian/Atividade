#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct funcionario{
	
char nome[200];
char dataAdmissao[200];
int matricula;	
char endereco[200];

};

struct cliente{
	
char nome[200];
char dataNascimento[200];	
char endereco[200];

};


int main(){
	setlocale(LC_ALL ,"portuguese");

int i,j;

struct funcionario funcionarios[2];

for(i = 0; i < 2; i++){
	
printf("\n Digite o nome do funcionário: ");
gets(funcionarios[i].nome);
	
printf("\n Digite a data de admissão: ");
gets(funcionarios[i].dataAdmissao);	
	
printf("\n Digite a matrícula: ");
scanf("%i" ,&funcionarios[i].matricula);	

fflush(stdin);

printf("\n Digite o endereço: ");
gets(funcionarios[i].endereco);	
	
fflush(stdin);
		
}

system("cls || clear");

struct cliente clientes[2];

for(j = 0; j < 2; j++){

printf("\n Digite o nome do cliente \n: ");
gets(clientes[i].nome);
	
printf("\n Digite a data de nascimento \n: ");
gets(clientes[i].dataNascimento);	
	
printf("\n Digite o endereço \n: ");
gets(clientes[i].endereco);	
	
fflush(stdin);

}

system("cls || clear");

printf("\n Exibindo as informações : ");

for(i = 0; i < 2; i++){
	
printf("\n \n Nome: %s" ,funcionarios[i].nome);
	
printf("\n \n Data de admissão: %s " ,funcionarios[i].dataAdmissao);
	
printf("\n \n Matrícula: %i" ,funcionarios[i].matricula);
	
printf("\n \n Endereço: %s" ,funcionarios[i].endereco);
	
fflush(stdin);	
	
}

for(j = 0; j < 2; j++){
	
printf("\n \n Nome: %s " ,clientes[i].nome);
	
printf("\n \n Data de nascimento: %s" ,clientes[i].dataNascimento);
	
printf("\n \n Endereço: %s" ,clientes[i].endereco);
	
fflush(stdin);	
	
	
	
	
}



return 0;
	
}
