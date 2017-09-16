/*
David Cote Soriano 
computadoras y programacion
programa de comparacion de 3 numeros y cual es el menor
Tarea No 7
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a,b,c;

	printf("Ingresa el primer numero\n");
	scanf("%i",&a);
	printf("Ingresa el segundo numero\n");
	scanf("%i",&b);
	printf("Ingresa el tercer numero\n");
	scanf("%i",&c);
		
		if((a>0 && b>0 && c>0) && (a!=b && a!=c && c!=b)){
				if(a<b && a<c){
					printf("El numero menor es: %i\n",a);
				}else if(b<a && b<c){
					printf("El numero menor es: %i\n",b);
				}else if(c<a && c<b){
					printf("El numero menor es: %i\n",c);
				}
		}else{
			printf("Los numeros deben ser mayores a cero y diferentes entre si\n\n");
		}
	system("PAUSE");
	return 0;
}
