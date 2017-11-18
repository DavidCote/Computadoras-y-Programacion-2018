/*
David Cote Soriano 
computadoras y programacion
programa en C Estructuras
Tarea No 24 Archivos
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int dato;
	
	FILE *ptrArchivo;
	ptrArchivo=fopen("datos.dat","wb");
	
	if(ptrArchivo==NULL){
		printf("Error al abrir el archivo\n");
	}else{
		
		printf("Dame el dato a guardar en el archivo:");
		scanf("%d",&dato);
		
		//se guarda en archivo
		fprintf(ptrArchivo,"%d\n",dato);
		fprintf(ptrArchivo,"%d\n",++dato);
		fprintf(ptrArchivo,"%d\n",++dato);
		
		fclose(ptrArchivo);
	}
	
	return 0;
}
