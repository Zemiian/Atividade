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


printf("\n Digite o %iº número: " ,i + 1);
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

printf("\n Quantidade de números pares: %i " ,pares);
printf("\n Quantidade de números ímpares: %i " ,impares);
printf("\n Quantidade de números positivos: %i " ,positivo);
printf("\n Quantidade de números negativos: %i " ,negativo);
printf("\n Quantidade de números inseridos: %i " ,i);
printf("\n Maior número: %i " ,maiorNumero);
printf("\n Menor número: %i " ,menorNumero);
printf("\n Média de números pares: %.1f " ,mediapar);
printf("\n Média de números ímpares: %.1f " ,mediaimpar);
printf("\n Média geral: %.1f " ,media);



for(i = 4; i >= 0; i--){	
printf("\n Números: %i" ,numeros[i]);

}

return 0;
	
}





	

