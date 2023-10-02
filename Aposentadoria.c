#include <stdio.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL, "portuguese");

int idade;
int cod;
int nascimento;
int tempoTrabalho;

/*printf("Digite sua idade\n");
scanf("%i", &idade);
*/

printf("Digite seu código\n");
    scanf("%i", &cod);

printf("Digite o ano de seu nascimento\n");
    scanf("%i", &nascimento);

printf("Digite o tempo de trabalho\n");
    scanf("%i", &tempoTrabalho);

    idade = 2023 - nascimento;

printf("\nCódigo do empregado: %i " ,cod);
printf("\nAno de nascimento: %i " ,nascimento);
printf("\nTempo de trabalho: %i " ,tempoTrabalho);
printf("\nIdade: %i" ,idade);

if(idade >= 65 && tempoTrabalho >= 30){
printf("\nRequer aposentadoria");
}
else{
printf("\nNão requer aposentadoria");
}









}