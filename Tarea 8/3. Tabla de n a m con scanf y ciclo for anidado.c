/*
David Cote Soriano 
computadoras y programacion
programa que muestra la tabala del n al m con scanf y ciclo for anidado
Tarea No 8
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i=0,j=0,a=0,b=0;
	
	printf("Este programa muestra las tablas de 'n' a 'm' de numeros que tu establescas\n\n");
	printf("Igresa la tabla inicial:\n");
	scanf("%i",&a);
	printf("Ingresa la tabla final:\n");
	scanf("%i",&b);
	
		if(b>a && a!=0){
			for(i=a;i<=b;i++){
			printf("\n");
				for(j=1;j<=10;j++){
					printf("%i x %i = %i\n",i,j,i*j);
				}
			}
		}else{
			printf("La tabla inicial debe ser menor a la tabla final y diferente de cero\n");
		}
	system("PAUSE");
	return 0;
}
