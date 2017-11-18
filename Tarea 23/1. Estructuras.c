/*
David Cote Soriano 
computadoras y programacion
programa en C Estructuras
Tarea No 23
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct alumnos{
	int edad;
	char nombre[60];
	char genero;
	char carrera[25];
	char nCuenta[10];
};

typedef struct alumnos ALUMNO;

int main(int argc, char *argv[]) {
	
	//struct alumnos var1;
	ALUMNO var1;
	
	printf("Introduce la edad:\n");
	scanf("%d",&var1.edad);
	
	printf("Introduce el nombre:\n");
	fflush(stdin);
	gets(var1.nombre);
	
	
	printf("Edad:%d nombre:%s",var1.edad,var1.nombre);
	
	return 0;
}
