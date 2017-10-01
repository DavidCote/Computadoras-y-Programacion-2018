/*
David Cote Soriano 
computadoras y programacion
programa que dice si un numero es par o impar
Tarea No 9
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int a=0,b;
	char cont;
	
	printf("Este programa te dice si un numero es par o impar\n");
	printf("-------------------------------------------------\n");
	
		do{
			printf("Introduce un numero entero\n");
			scanf("%i",&a);
			b=a%2;
			
			if(b==0){
				printf("El numero es par\n");
			}else{
				printf("El numero es impar\n");
			}
			
			fflush(stdin);
			printf("------------------------------------\n");
			printf("%cDesea introducir otro numero? (y/n)\n",168);
			scanf("%c",&cont);
		}while(cont=='y' || cont=='Y');
		
		if(cont=='n' || cont=='N'){
			printf("Fin del programa\n");
		}else{
			printf("Opcion incorrecta\n");
		}
	system("PAUSE");
	return 0;
}
