/*
David Cote Soriano 
computadoras y programacion
programa que pide un numero del 1 al 7 e identifica a que dia
de la semana corresponde
Tarea No 9
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int ndia;
	char cont;
	
	printf("Este programa identifica el dia de la semana a partir de un numero.\n");
	printf("-------------------------------------------------------------------\n");

		do{
			printf("Introduce un numero entre 1 y 7:\n");
			scanf("%i",&ndia);
				switch (ndia){
			
					case 1:
						printf("El numero introducido es %i y corresponde al dia: Lunes\n",ndia);
						break;
			
					case 2:
						printf("El numero introducido es %i y corresponde al dia: Martes\n",ndia);
						break;
			
					case 3:
						printf("El numero introducido es %i y corresponde al dia: Miercoles\n",ndia);
						break;
			
					case 4:
						printf("El numero introducido es %i y corresponde al dia: Jueves\n",ndia);
						break;
			
					case 5:
						printf("El numero introducido es %i y corresponde al dia: Viernes\n",ndia);
						break;
			
					case 6:
						printf("El numero introducido es %i y corresponde al dia: Sabado\n",ndia);
						break;
			
					case 7:
						printf("El numero introducido es %i y corresponde al dia: Domingo\n",ndia);
						break;
			
					default:
						printf("El valor introducido es invalido\n");
				}
			fflush(stdin);
			printf("\n-----------------------------------\n");
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
