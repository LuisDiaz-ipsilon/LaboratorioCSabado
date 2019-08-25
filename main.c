#include <stdio.h>

/* 
Autor: Luis Fernando Flores Diaz
Fecha: 25/08/2019
Grupo: 008
Horario: Sabado 9:00am - 11:00am
Matricula: 1821936
 */

int main() 
{ 
 /* Actividad 1*/
	float x, resultado;  /* se declara el resultado y la variable "x" como tipo flotante en caso de que se encuentre un entero con decimal como respuesta de la funcion*/ 
	printf("indique el valor de x para las funciones \n");  /* se le indica al us teclear el valor de x para la funcion mencionada*/
	scanf("%f", &x); 		 
	resultado=(x-1)/4-(x-5)/36;   /* se le asigna el valor de la funcion a la variable correspondiente*/
	
	printf("el valor de la primera funcion \"(x-1)/4-(x-5)/36\" es: %f\n", resultado);  /* se imprime el resultado en pantalla de la primer funcion */

	 
	
	
	return 0;
}
