#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
setlocale(LC_ALL ,"portuguese");

char loginSalvo[50];
int senhaSalva[50];
char login[50];
int senha[50];

printf("\nRegistre seu login: ");
scanf("%s" ,&loginSalvo);
printf("\nDigite sua senha: ");
scanf("%i" ,&senhaSalva);

do{

printf("\nDigite seu login: ");
scanf("%s" ,&login);
printf("\nDigite sua senha: ");
scanf("%i" ,&senha);

if(strcmp(login, loginSalvo) == 0 && strcmp(senha, senhaSalva) == 0) {
printf("\nWelcome");
}else{
printf("\nAcesso negado!");	
}
	
} while(strcmp(login, loginSalvo) != 0 || strcmp(senha, senhaSalva) != 0);	

	
return 0;	
}
