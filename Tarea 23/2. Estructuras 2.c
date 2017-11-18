/*
David Cote Soriano 
computadoras y programacion
programa en C Estructuras 2
Tarea No 23
*/
#include <stdio.h>
#include <string.h>
#include "alumnos.h"
#define MAX 3

int main(int argc, char *argv[]) {
	
	/*ALUMNO var1;
	
	var1=nuevoAlumno();
	
	printf("Edad:%d Nombre:%s",var1.edad,var1.nombre);
	imprimeAlumno(var1);*/
	
	ALUMNO lista [MAX];
	
	int j;
	for(j=0;j<MAX;j++){
		printf("Datos del alumno %d\n",j+1);
		lista[j]=nuevoAlumno();
	}
	
	for(j=0;j<MAX;j++){
		imprimeAlumno(lista[j]);
	}
	
	return 0;
}
