/*
David Cote Soriano 
computadoras y programacion
programa que pide un numero y muestra el mismo numero de asteriscos
Tarea No 9
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int nast=0,i=0,salto=0;
	char cont;

	printf("Este programa imprime el numero de asteriscos que tu le digas\n");
	printf("Nota: el programa introduce un salto de linea cada 50 caracteres");
	printf("\n-------------------------------------------------------------\n");
		do{
			printf("Introduce un numero entero mayor a cero\n");
			scanf("%i",&nast);
			
				if(nast>0){
					for(i=1;i<=nast;i++){
						salto++;
						printf("*");
							if(salto==50){
								printf("\n");
								salto=0;
							}
					}
				}else{
					printf("El numero debe ser mayor a cero");
				}
			
			salto=0;
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
