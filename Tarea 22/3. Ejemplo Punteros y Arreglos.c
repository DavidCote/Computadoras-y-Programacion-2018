/*
David Cote Soriano 
computadoras y programacion
programa en C Puteros 3
Tarea No 22
*/
#include <stdio.h>
#include <stdlib.h>
#include "info.h"
#define MAX 10

int main(int argc, char *argv[]) {
	
	appInfoData("Ejemplo punteros y arreglos","10/11/2017");
	
	int cals[MAX]={8, 9, 8, 8, 6, 7, 9, 8, 10, 10};
	int *ptrCals;
	
	printf("Valor del primer elemento: %d\n", cals[0]);
	printf("Direccion del primer elemento: %d\n", &cals[0]);
	printf("Direccion del primer elemento: %d\n", cals);
	
	ptrCals=cals;
	
	printf("Valor del primer elemento: %d\n", *ptrCals);
	
	return 0;
}
