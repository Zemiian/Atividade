#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int soma(int n1, int n2){ // Função soma, delcara as var dentro dos colchetes, caso queira receber algum retorno
		setlocale(LC_ALL ,"portuguese");

int resultado;
resultado = n1 + n2;	
return(resultado);
	
}

int main(){
  int n1, n2, resultado;
  printf("Digite o primeiro numero:");
  scanf("%i", &n1);
  printf("Digite o segundo numero:");
  scanf("%i", &n2);
  
  
  resultado = soma(n1,n2);
  
  printf("\n Resultado = %i", resultado);
  
  return 0;
}
