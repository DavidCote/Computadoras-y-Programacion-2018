/*
David Cote Soriano 
computadoras y programacion
juego piedra papel o tijera
Tarea No 10
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int o1=0,o2=-1,p1=-2,p2=-3,t1=-4,t2=-5;
	char opj1,opj2,cont;
	//introducción y descripcion del juego
	printf("\tJuego: piedra, papel o tijera\n");
	printf("---------------------------------------------\n");
	printf("\t\tINSTRUCCIONES:\n");
	printf("  A cada opcion se le ha asignado una letra\n\t\tpiedra: \"o\"\n\t\tpapel:  \"p\"\n\t\ttijera: \"t\"\n");
	printf("  Introduce la letra que represente la opcion que escogiste\n");
	printf("  Puedes introducir la letra en mayuscula o minuscula\n\n\t\tDIVIERTETE!\n\n");
		do{
			printf("\n----------------------\n");
			printf("%cQUE COMIENCE EL DUELO!\n\n",173);
			//pregunta al jugador 1 por una opcion valida; se repite hasta que reciba una opcion ya especificada
			do{
				fflush(stdin);
				printf("Jugador 1 elige una opcion\n");
				scanf("%c",&opj1);
					//se asigna un numero identificador a la opción recibida
					if(opj1=='o' || opj1=='O'){
						o1=1;
					}else if(opj1=='p' || opj1=='P'){
						p1=2;
					}else if(opj1=='t' || opj1=='T'){
						t1=3;
					}
			}while((opj1!='o' && opj1!='O') && (opj1!='p' && opj1!='P') && (opj1!='t' && opj1!='T'));
			//pregunta al jugador 2 por una opcion valida; se repite hasta que reciba una opcion ya especificada
			do{
				fflush(stdin);
				printf("\nJugador 2 elige una opcion\n");
				scanf("%c",&opj2);
					//se asigna un numero identificador a la opción recibida
					if(opj2=='o' || opj2=='O'){
						o2=1;
					}else if(opj2=='p' || opj2=='P'){
						p2=2;
					}else if(opj2=='t' || opj2=='T'){
						t2=3;
					}
			}while((opj2!='o' && opj2!='O') && (opj2!='p' && opj2!='P') && (opj2!='t' && opj2!='T'));
			//se usan los numeros identificadores para determinar las condiciones de victoria, derrota y empate
			if((o1==o2) || (p1==p2) || (t1==t2)){
				printf("\nEmpate\n");
			}else if((o1==1 && p2==2) || (p1==2 && o2==1)){
				if(o1==1){
					printf("\nEl Jugador 2 gana\n");
				}else{
					printf("\nEl jugador 1 gana\n");
				}
			}else if((o1==1 && t2==3) || (t1==3 && o2==1)){
				if(o1==1){
					printf("\nEl Jugador 1 gana\n");
				}else{
					printf("\nEl Jugador 2 gana\n");
				}
			}else if((p1==2 && t2==3) || (t1==3 && p2==2)){
				if(p1==2){
					printf("\nEl Jugador 2 gana\n");
				}else{
					printf("\nEl jugador 1 gana\n");
				}
			}
			//se resetean los valores de las variables para evitar conflictos en la siguiente ejecucion del bucle
			o1=0;
			o2=-1;
			p1=-2;
			p2=-3;
			t1=-4;
			t2=-5;
			
			fflush(stdin);
			printf("\n-----------------------------------\n");
			printf("%cQuieres jugar de nuevo? (y/n)\n",168);
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
