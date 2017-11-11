/*
David Cote Soriano 
computadoras y programacion
programa en C Puteros 5
Tarea No 22
*/
#include <stdio.h>
#include <stdlib.h>
#include "info.h"
#define MAX 10

int main(int argc, char *argv[]) {
	
	appInfoData("Ejemplo de punteros y arreglos","10/11/2017");
	
	int cals[MAX]={8, 9, 8, 8, 6, 7, 9, 8, 10, 10};
	int *ptrCals;
	int j=0;
	ptrCals=cals;
	printf("Elemento\t Direccion\t Valor\n");
	
	for(j=0;j<MAX;j++){
	printf("%d	       \t%d \t %d\n",j,&cals[j],cals[j]);
	}
	
	printf("------------------------------\n");
	
	printf("Direccion a la que apunta: %d\n", ptrCals);
	printf("Valor a la que apunta: %d\n", *ptrCals);
	ptrCals=ptrCals + 4;
	printf("Direccion a la que apunta: %d\n", ptrCals);
	printf("Valor a la que apunta: %d\n", *ptrCals);
	
	return 0;
}
