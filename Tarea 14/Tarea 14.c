/*
David Cote Soriano 
computadoras y programacion
programa Variable y constante
Tarea No 14
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int main(int argc, char *argv[]) {
	int edad=0;
	const float PI=3.1416;
	
	printf("%cCual es tu edad?: ",168);
	scanf("%d",&edad);
	
	//MAX=6;
	//PI=3.14159265;
	printf("Tu edad es=%d \n",edad);
	printf("Maximo=%d\n",MAX);
	printf("Valor de PI=%f",PI);
	
	return 0;
}
