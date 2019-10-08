#include <stdio.h>
/* 
Autor: Luis Fernando Flores Diaz
Fecha: 07/10/2019
Grupo: 008
Horario: Sabado 9:00am - 11:00am
Matricula: 1821936
 */

int main() {
	//**************ACTIVIDAD1*****************
	int ventasEmpleadoOficinaEdificio[5][9][1], e=3,o=7,ed=1;		// se toma en cuenta la posicion 0 de cada dimension, pero se cumple la cantidad de elemento que indica la readaccion.
	
	ventasEmpleadoOficinaEdificio[e][o][ed]=4234;	//utilize el numero 1 en la dimension 3 indicando que es el segundo elemento. 
	
	printf("El empleado %d de la ofinica numero %d del edificio numero %d ha vendido: %d unidades\n", e, o, ed+1, ventasEmpleadoOficinaEdificio[e][o][ed]);
	
	/*
	a) ¿Cuantos elementos componen el array multidimensional?
		10*6*2=120.
		120 elementos.
		
	b) ¿Qué ocurre si intentamos mostrar por pantalla un valor con un índice que no está definido para ese array multidimensional?
		Como el lenguaje C permite mostrar valores que estan fuera del rango indicado, podria mostrar un valor que no es correcto(basura). 
	*/
	
	//**************ACTIVIDAD2*****************

	int x, y, z; // variables para navegar por el array y sus tres dimensiones.
	
	for (x=0; x<6; x++){		// ciclo para sumar 10 unidades a cada una de las ventas
		for (y=0; y<10; y++){
			for (z=0; z<2; z++){
			ventasEmpleadoOficinaEdificio[x][y][z]+=5;
			}
		}
	}
	printf("El empleado %d de la ofinica numero %d del edificio numero %d ha vendido: %d unidades\n", e, o, 2, ventasEmpleadoOficinaEdificio[3][7][1]);	//impresion de el resultado despues de sumar 10 unidades.
	


	
	return 0;
}
