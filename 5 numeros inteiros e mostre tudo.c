#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL ,"portuguese");
	
int i;
int numeros[5];
int pares = 0,impares = 0;
float media = 0;
int maiorNumero = 0;
int menorNumero = 99999;
int soma = 0, somaPar = 0, somaImpar = 0;
int positivo = 0,negativo = 0;
float mediapar,mediaimpar;


for(i = 0 ; i < 5; i++){


printf("\n Digite o %i� n�mero: " ,i + 1);
scanf("%i" ,&numeros[i]);
	
	maiorNumero = maiorNumero > numeros[i] ? maiorNumero : numeros[i];
    menorNumero = menorNumero < numeros[i] ? menorNumero	: numeros[i];

if(numeros[i] % 2 == 0 && numeros[i] > 0){
pares++;	
somaPar += numeros[i];
} else if(numeros[i] % 2 == 1 && numeros[i] > 0){
impares++;	
somaImpar += numeros[i];
}	
	


soma += numeros[i];

if(numeros[i] > 0){
positivo++;
} else if(numeros[i] < 0){
negativo++;	
}
		
}

	


mediapar = somaPar / pares;
mediaimpar = somaImpar / impares;
media = soma / i;

printf("\n Quantidade de n�meros pares: %i " ,pares);
printf("\n Quantidade de n�meros �mpares: %i " ,impares);
printf("\n Quantidade de n�meros positivos: %i " ,positivo);
printf("\n Quantidade de n�meros negativos: %i " ,negativo);
printf("\n Quantidade de n�meros inseridos: %i " ,i);
printf("\n Maior n�mero: %i " ,maiorNumero);
printf("\n Menor n�mero: %i " ,menorNumero);
printf("\n M�dia de n�meros pares: %.1f " ,mediapar);
printf("\n M�dia de n�meros �mpares: %.1f " ,mediaimpar);
printf("\n M�dia geral: %.1f " ,media);



for(i = 4; i >= 0; i--){	
printf("\n N�meros: %i" ,numeros[i]);

}

return 0;
	
}





	

