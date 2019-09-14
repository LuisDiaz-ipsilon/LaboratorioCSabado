#include <stdio.h>


/* 
Autor: Luis Fernando Flores Diaz
Fecha: 14/09/2019
Grupo: 008
Horario: Sabado 9:00am - 11:00am
Matricula: 1821936
*/

int main() {
	//**************ACTIVIDAD 1************************
	int sumaNumero, nuevoNumero;  //se declaran las variables para la recolecion de la suma de los numeros.
	char siNo;				//se declara la variable de decision de sumar un numero.
	
	printf("introduzca un numero:\n");		//se pregunta al usuario por el primer numero.
	scanf("%d", &sumaNumero);				
	printf("desea introducir otro numero?(s/n)\n");		//el usuario decide si sumar otro numero.
	scanf(" %c", &siNo);
	
	while (siNo!='n') {					//lineas 21-26:  proceso de sumar un numero nuevo numero si lo decide el usuario.
		printf("introduzca un numero entero\n");
		scanf("%d", &nuevoNumero);
		sumaNumero=sumaNumero+nuevoNumero;
		printf("Desea introducir un nuevo numero?(s/n)\n");
		scanf(" %c", &siNo);				//se le pide al usuario decidir nuevamente.
	} 
	
	printf("La suma de los numeros introducidos es: %d", sumaNumero);		//se muestra al usuario la suma de los numeros.
	

	
	

	return 0;
}
