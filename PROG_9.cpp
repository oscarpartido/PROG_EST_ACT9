/*
autor: oscar vivaldi partido ramirez  realizado:: 21/02/2022
programa que pida numeros y se termine cuando se introduzca el 0
y calcule la suma con ciclo do while 
*/
#include <stdio.h>

int main(){
	float numero, suma=0;
	int i=1;
	do{
		printf("Introduce el valor numero %d: ", i);
		scanf("%f",&numero);
		suma=suma+numero;
		i++;
	}while (numero!=0);
	printf("la suma es %.2f", suma );
	
	
	return 0;
	}

