#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
int idade;

printf("Digite sua idade: ");
scanf("%i" ,&idade);

if ((idade < 18) || (idade > 65))
{

printf("Voc� n�o � obrigado a votar");
}
else
{
printf("Voc� � obrigado a votar");





} 

    return 0;
}
