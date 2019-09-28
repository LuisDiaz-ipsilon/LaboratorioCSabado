#include <stdio.h>


/* 
Autor: Luis Fernando Flores Diaz
Fecha: 28/09/2019
Grupo: 008
Horario: Sabado 9:00am - 11:00am
Matricula: 1821936
 */

int main() {
	//**************ACTIVIDAD1*****************
	int r=0, numeroDeCoches[24]; //se declaran variables para el alamcenamiento de las posiciones y el control de la posicion.
									
	
	for (r=0; r<24; r++){			//se limpian las 24 posisicones
		numeroDeCoches[r]=0;	
	}
	
	for (r=0; r<24; r++){				//se generan los valores sumando 5 cada posicion.
		numeroDeCoches[r]+=5;
	}
	
	numeroDeCoches[2]=57;				//se indica al programa que la posicion 2 y 21 del arreglo valen 57.
	numeroDeCoches[21]=57;
	
	r=2;
	printf("la hora  %1d la cantidad de coches es: %1d\n", r, numeroDeCoches[r]);		//lineas: 27-30: se imprimen los valores de la posicion 2 y 21.
	r=21;
	printf("la hora  %1d la cantidad de coches es: %1d\n", r, numeroDeCoches[r]);
	
	//**************ACTIVIDAD2*****************
	int a=8, b=4;  //se declaran variables para la posicion de r deseada.
	
	r=a/b;						//se realiza operacion y asginacion del valor en la posicion indicada.
	numeroDeCoches[r]=57;			
	printf("la hora  %1d la cantidad de coches es: %1d\n", r, numeroDeCoches[r]);		//se imprime la posicion y el valor indicado.
	
	
	
	
	return 0;
}
