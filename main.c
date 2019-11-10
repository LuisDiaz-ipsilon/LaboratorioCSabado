#include <stdio.h>
#include <stdlib.h>
/* 
Autor: Luis Fernando Flores Diaz
Fecha: 09/11/2019
Grupo: 008
Horario: Sabado 9:00am - 11:00am
Matricula: 1821936
*/

struct picture_info {//ACTIVIDAD 1 Se declara estuctura de el nombre y fecha de la fotografia
	char name[50];
	char data_time;
} pictures[4];

struct picture_Id {//ACTIVIDAD 1 se declara la estrutura que almacera los id de las fotografias
	int *id
} IdPicture[4];


int main() {
	//**************ACTIVIDAD1*****************
	int i=0;
	printf("		Atividad 1\n");
	for (i=0; i<5; i++){				//se solicita la informacion de las fotografias.
		printf("indique el nombre de la foto(%d): ", i+1);
		fflush(stdin);
		gets(pictures[i].name);
		printf("Fecha de la fotografia(%d)(ddmmaa): ", i+1);
		scanf("%d", &pictures[i].data_time);
	}
	printf("\n");			//con un ciclo for se almacenan los valores de memoria de los datos de las fotos. 
	for (i=0; i<5; i++){
		IdPicture[i].id=&pictures[i];
		printf("foto %d: %s\nID: %p\n\n\n", i+1, pictures[i].name, IdPicture[i].id);		//se imprimen los datos y los numeros de identificaciones 
	}

	printf("\n\n		Atividad 2\n");
	//**************ACTIVIDAD2*****************
	struct coordinates{
		int lat; 	//se delcara la latitud
		int lon;	//se declara la longitud
	} place[4];
	
	struct direcciones{			//se declara una estructura de que almacena los numeros de identificacion de los lugares.
		int *llat;
		int *llon;
	} placeDir[4];
	
	place[0].lat=200;		//se asignan valores indicados en la redaccion del problema.
	place[0].lon=300;
	//////////////////////
	place[1].lat=400;
	place[1].lon=100;
	//////////////////////
	place[2].lat=100;
	place[2].lon=400;
	/////////////////////
	place[3].lat=300;
	place[3].lon=200;
	
	int opc; 			//controlador para el menu de seleccion de ordenamiento.
	int x, j, *aux, exit=0;  //se declara controladores pra ciclos, un auxiliar de tipo puntero, y un controlador para el funcionamiento de un ciclo so while.
	place[4].lat=1000;		//se hacen las posiciones que continuan para que no se tomen en cuenta en los ciclos for. 
	place[4].lon=1000;
	
	for (x=0; x<4; x++){ 			//se sincronizan los valores de la estructura de apuntadores con los valores reales
		placeDir[x].llat=place[x].lat;
		placeDir[x].llon=place[x].lon;
	}
	printf("\n\nEn que orden quiere mostrar la tabla de lugares?\n1: Ordenar por obtenidos\n2: Ordenar creciente por latitud\n3: Creciente por longitud\n4: salir\n\nOpcion: ");
	scanf("%d", &opc);
	
	do {
		switch(opc) {
			case 1: {
				for (x=0; x<4; x++){		//impresion de 
					printf("LUGAR %d con latitud: %d, longitud: %d: \n", x+1, place[x].lat, place[x].lon);
				}
				exit=1;
				break;
			}
			case 2: {// metodo de burbuja para acomodar crecientemente por latitud
				for(x=0; x<4; x++){
					for(j=0; j<4; j++){
						if (placeDir[j].llat>placeDir[j+1].llat){
							aux=placeDir[j].llat;
							placeDir[j].llat=placeDir[j+1].llat;
							placeDir[j+1].llat=aux;
							
							aux=placeDir[j].llon;
							placeDir[j].llon=placeDir[j+1].llon;
							placeDir[j+1].llon=aux;
						}
					} 
				} // metodo de burbuja para acomodar crecientemente por latitud
				for (x=0; x<4; x++){
					printf("LUGAR %d, CON LATITUD: %d, LONGITUD: %d\n", x+1, placeDir[x].llat, placeDir[x].llon);	//impresion de resultados por latitud
				}
				exit=1;
				break;
			}
			case 3: {// metodo de burbuja para acomodar crecientemente por longitud
				for(x=0; x<4; x++){
					for(j=0; j<4; j++){
						if (placeDir[j].llon>placeDir[j+1].llon){
							aux=placeDir[j].llon;
							placeDir[j].llon=placeDir[j+1].llon;
							placeDir[j+1].llon=aux;
							
							aux=placeDir[j].llat;
							placeDir[j].llat=placeDir[j+1].llat;
							placeDir[j+1].llat=aux;
						}
					} 
				} // metodo de burbuja para acomodar crecientemente por longitud
				for (x=0; x<4; x++){
					printf("LUGAR %d, CON LATITUD: %d, LONGITUD: %d\n", x+1, placeDir[x].llat, placeDir[x].llon);  //impresion de resiltados por longitud
				}
				exit=1;
				break;
			}
			case 4: {
					exit=1; //salida para el ciclo do while		
					break;
				}
			default: {
					printf("\nIndique una opcion valida");
					break;
			}	
		}
	} while (exit!=1);
	

	return 0;
}


