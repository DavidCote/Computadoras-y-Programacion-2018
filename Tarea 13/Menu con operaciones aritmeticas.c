/*
David Cote Soriano 
computadoras y programacion
programa con menu de operaciones aritmeticas y opción de salida
Tarea No 13
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int op,a=0,b=0,res=0;
	char cont;
	do{
		printf("-----------------\n");
		printf("Elige una opcion:\n1: Suma.\n2: Resta.\n3: Salir.\n");
		printf("-----------------\n");
		scanf("%i",&op);
		
		switch(op){
			case 1:
				
				printf("\nHas elegido la suma.\n");
				printf("\nIntroduce el primer numero.\n");
				scanf("%i",&a);
				printf("Introduce el segundo numero.\n");
				scanf("%i",&b);
				res=a+b;
				
				printf("\n%i + %i = %i\n",a,b,res);
				
				break;
					
			case 2:
				
				printf("\nHas elegido la resta.\n");
				printf("\nIntroduce el primer numero.\n");
				scanf("%i",&a);
				printf("Introduce el segundo numero.\n");
				scanf("%i",&b);
				res=a-b;
				
				printf("\n%i - %i = %i\n",a,b,res);
				
				break;
			
			case 3:
				
				exit (0);
				
				break;
				
			default:
				printf("\nOpcion invalida.\n");
		}
		
		fflush(stdin);
		printf("-----------------------------\n");
		printf("%cQuieres elegir otra opcion? (s/n)\n",168);
		scanf("%c",&cont);
	}while(cont=='s'|| cont=='S');
	
	system("PAUSE");
	return 0;
}
