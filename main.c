#include <stdio.h>
#include <stdlib.h>

/* 
Autor: Luis Fernando Flores Diaz
Fecha: 25/08/2019
Grupo: 008
Horario: Sabado 9:00am - 11:00am
Matricula: 1821936
 */

int main() {
	/*****Actividad 1*****/
	int numeroUno, numeroDos;
	
	printf("indroduzca el primer numero\n"); /* se solicita al usuario los numeros a validar*/
	scanf("%d", &numeroUno);
	printf("introduzca el desgundo numero\n");
	scanf("%d", &numeroDos);
	
	if (numeroUno==numeroDos){
		printf("los dos numeros son iguales"); /* en este caso se campararan, en caso cierto se le indicara que son iguales*/
	}
	else if (numeroUno<numeroDos){
		printf("el numero %d, es mas grande que %d\n", numeroDos, numeroUno);
	}
	else if (numeroUno>numeroDos){
		printf("el numero %d, es mas grande que %d\n", numeroUno, numeroDos);
	}
	return 0;
}
