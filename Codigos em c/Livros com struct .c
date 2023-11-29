#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL ,"portuguese");
	
struct livroInfo{
	
char nome[200];
char autor[200];
char categoria[200];
float preco;	
};

int i,j;
	
struct livroInfo livros[3];

for(i = 0; i < 3; i++){
printf("\n Digite o nome do livro: ");	
gets(livros[i].nome);	

printf("\n Digite o nome do autor: ");	
gets(livros[i].autor);

printf("\n Digite a categoria do livro: ");	
gets(livros[i].categoria);

printf("\n Digite o preço do livro R$: ");	
scanf("%f" ,&livros[i].preco);	

fflush(stdin);

}	

system("cls || clear");

printf("Exibindo informações do usuário: ");	

for(i = 0; i < 3; i++){
	
printf("\n Nome dos livros: %s" ,livros[i].nome);	
printf("\n Nome dos autores: %s" ,livros[i].autor);	
printf("\n Nome das categorias: %s" ,livros[i].categoria);	
printf("\n Preço dos livros: %.2f" ,livros[i].preco);	
	

	
}
	
	
	
	
return 0;	
	
}
