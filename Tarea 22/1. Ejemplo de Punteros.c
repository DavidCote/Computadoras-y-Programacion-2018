/*
David Cote Soriano 
computadoras y programacion
programa en C Punteros
Tarea No 22
*/
#include <stdio.h>
#include <stdlib.h>
#include "info.h"

int main(int argc, char *argv[]) {
	
	appInfoData("Ejemplo de punteros","10/11/2017");
	
	int a;
	a=10;
	int *puntero;
	puntero=&a;
	printf("%d\n",*puntero);
	return 0;
}
