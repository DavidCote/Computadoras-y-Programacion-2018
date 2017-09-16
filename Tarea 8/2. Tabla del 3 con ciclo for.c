/*
David Cote Soriano 
computadoras y programacion
programa que muestra la tabla del 3 con ciclo for
Tarea No 8
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int num=3,i=0;
	
		for(i=1;i<=10;i++){
			printf("%i x %i = %i\n",num,i,num*i);
		}
	system("PAUSE");
	return 0;
}
