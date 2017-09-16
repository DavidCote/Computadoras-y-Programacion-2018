/*
David Cote Soriano 
computadoras y programacion
programa que imprime un cuadrado vacio de simbolos
Tarea No 8
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i=0,j=0;
	for(i=0;i<=5;i++){
		for(j=0;j<=5;j++){
			if((i==0 || i==5) || (j==0 || j==5)){
				printf(" + ");
			}else{
				printf("   ");
			}
		}
		printf(" \n\n");	
	}
	system("PAUSE");
	return 0;
}
