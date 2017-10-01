/*
David Cote Soriano 
computadoras y programacion
programa que calcula iva e imprime total, iva y subtotal
Tarea No 10
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float cantidad=0,iva=0,total=0,subtotal=0;
	char cont;
	
	printf("Este programa calcula iva, total y subtotal de numeros que ingreses\n");
	printf("-------------------------------------------------------------------\n");
	
		do{
			printf("Introduce el iva (excluye el simbolo \"%%\")\n");
			scanf("%f",&iva);
			printf("introduce una cantidad\n");
			scanf("%f",&cantidad);
			subtotal=cantidad;
			total=cantidad+cantidad*(iva/100);
			printf("----------------------------------------\n");
			printf(" iva:       %.2f %% \n subtotal: %.2f $\n total:    %.2f $\n",iva,subtotal,total);
				
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
