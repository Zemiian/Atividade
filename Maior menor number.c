#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    printf("Digite o primeiro n�mero\n");
    scanf("%i", &num1);

    //fflush()

    printf("Digite o segundo n�mero\n");
    scanf("%i", &num2);

    printf("Digite o segundo n�mero\n");
    scanf("%i", &num3);

    printf("\nPrimeiro n�mero: %i" ,num1);
    printf("\nSegundo n�mero: %i" ,num2);
    printf("\nTerceiro n�mero: %i" ,num3);

    if(num1 > num2 && num1 > num3){
    printf("\nMaior n�mero: %i " ,num1);
    }

    if(num2 > num1 && num2 > num3){
    printf("Maior n�mero: %i" ,num2);

    }

    if (num3 > num1 && num3 > num2){
    printf("Maior n�mero:  %i" ,num3);    
    }

    if(num1 < num2 && num1 < num3){
    printf("\nMenor n�mero: %i " ,num1);
    }

    if(num2 < num1 && num2 < num3){
    printf("Menor n�mero: %i" ,num2);

    }

    if (num3 < num1 && num3 < num2){
    printf("Menor n�mero:  %i" ,num3);    
    }



}
