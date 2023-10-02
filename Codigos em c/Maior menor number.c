#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    printf("Digite o primeiro número\n");
    scanf("%i", &num1);

    //fflush()

    printf("Digite o segundo número\n");
    scanf("%i", &num2);

    printf("Digite o segundo número\n");
    scanf("%i", &num3);

    printf("\nPrimeiro número: %i" ,num1);
    printf("\nSegundo número: %i" ,num2);
    printf("\nTerceiro número: %i" ,num3);

    if(num1 > num2 && num1 > num3){
    printf("\nMaior número: %i " ,num1);
    }

    if(num2 > num1 && num2 > num3){
    printf("Maior número: %i" ,num2);

    }

    if (num3 > num1 && num3 > num2){
    printf("Maior número:  %i" ,num3);    
    }

    if(num1 < num2 && num1 < num3){
    printf("\nMenor número: %i " ,num1);
    }

    if(num2 < num1 && num2 < num3){
    printf("Menor número: %i" ,num2);

    }

    if (num3 < num1 && num3 < num2){
    printf("Menor número:  %i" ,num3);    
    }



}
