/*
David Cote Soriano 
computadoras y programacion
programa que pide tres numeros (dos flotantes y uno entero) y los compara
Tarea No 12
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float num1=0,num2=0;
	int num=0;
	char op;
	
	printf("Este programa recibe tres numeros, dos decimales y uno entero\nademas te dice cual es el mayor y cual es el menor.\n");
	printf("===============================================================================\n");
	
	do{
		printf("\nIntroduce el primer numero. (decimal)\n");
		scanf("%f",&num1);
		printf("Introduce el segundo numero. (decimal)\n");
		scanf("%f",&num2);
		printf("Introduce el tercer numero. (entero)\n");
		scanf("%i",&num);
		
		printf("\nLos numeros son %.2f, %.2f y %i.\n\n",num1,num2,num);
		//Se determina si los números son iguales o cuál de ellos es el mayor
		if(num1==num2 && num1==num){
			printf("Los numeros son iguales.");
		}else if(num1>num2 && num1>num){
			printf("El numero: %.2f es el mayor. ",num1);
		}else if(num2>num1 && num2>num){
			printf("El numero: %.2f es el mayor. ",num2);
		}else if(num>num1 && num>num2){
			printf("El numero: %i es el mayor. ",num);
		}
		//Determina cuál número es el menor
		if(num1<num2 && num1<num){
			printf("El numero: %.2f es el menor. ",num1);
		}else if(num2<num1 && num2<num){
			printf("El numero: %.2f es el menor. ",num2);
		}else if(num<num1 && num<num2){
			printf("El numero: %i es el menor. ",num);
		}
		//Para el caso en el que dos números sean iguales y menores al tercer número
		if(num1>num2 && num2==num){
			printf("Los otros dos son menores e iguales a %.2f.",num2);
		}else if(num2>num1 && num1==num){
			printf("Los otros dos son menores e iguales a %.2f.",num1);
		}else if(num>num1 && num1==num2){
			printf("Los otros dos son menores e iguales a %.2f.",num1);
		}
		//Para el caso en el que dos números sean iguales y mayores al tercer número
		if(num1<num2 && num2==num){
			printf("Los otros dos son mayores e iguales a %.2f.",num2);
		}else if(num2<num1 && num1==num){
			printf("Los otros dos son mayores e iguales a %.2f.",num1);
		}else if(num<num1 && num1==num2){
			printf("Los otros dos son mayores e iguales a %.2f.",num1);
		}
				
		fflush(stdin);
		printf("\n\n---------------------------------------\n");
		printf("%cQuieres introducir otro numero? (s/n)\n",168);
		scanf("%c",&op);
	}while(op=='s' || op=='S');
	
	system("PAUSE");
	return 0;
}
