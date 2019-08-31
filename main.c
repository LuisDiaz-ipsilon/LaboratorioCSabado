#include <stdio.h>
#include <stdlib.h>

/* 
Autor: Luis Fernando Flores Diaz
Fecha: 31/08/2019
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
		printf("los dos numeros son iguales\n\n"); /* en este caso se campararan, en caso cierto se le indicara que son iguales*/
	}
	else if (numeroUno<numeroDos){
		printf("el numero %d, es mas grande que %d\n\n", numeroDos, numeroUno);  /* en esta seccion se valida cual numero es el mas grande*/
	}
	else if (numeroUno>numeroDos){
		printf("el numero %d, es mas grande que %d\n\n", numeroUno, numeroDos);
	}
	
	/*****Actividad 2*****/
	
	printf("ACTIVIDAD 2\n\n\n");
	
	int a, b, c;	/*se declaran las variables */
	
	a=5;			/*en esta seccion se asignan valores default a las variables */
	b=3;
	c=-12;
	
	if (a>3){
		printf("el numero a: %d, es mayor que 3\n", a);	/*se valida si el numero es mayo que 3 en caso positivo*/
	}	
		else {
			printf("el numero a: %d no es mayor que 3\n", a);	/*se valida si el numero es mayo que 3 en caso negativo*/
		}
	if (a>c){
		printf("el numero a: %d, si es mayor que el numero c: %d\n", a, c); 	/* se verifica la parte positiva en caso de que el numero a sea mayor que c*/
	}
		else{ 
		printf("el numero a: %d, no es mayor que el numero c: %d\n", a, c); /* esta es la el caso falso en donde a es mayor que c */
		}
	if (b==c){
		printf("el numero b: %d, es igual al numero c: %d\n",b, c); /* caso verdadero en donde b es igual a c*/
	}
		else {
			printf("el numero b: %d, no igual al numero c: %d\n",b, c); /*caso falso en donde b es diferente de c */
		}
	if (a==3){
		printf("el numero a %d, es igual a 3\n", a); /*se valida la parte verdadera de a igual a 3 */
	}
		else {
			printf("el numero a: %d, es diferente de 3\n", a);	/*se valida la parte falsa de a igual a 3 */
		}
	if (a*b==15){
		printf("el valor del producto entre a: %d y b: %d es igual a 15\n", a, b); /* parte verdadera del producto de a por b igual a 15*/
	}
		else {
			printf("el valor del producto entre a: %d y b: %d es diferente a 15\n", a, b); /* es la contraparte */
		}
	if (c/b<a){
		printf("el valor del cociente entre c: %d y b: %d, es menor que a: %d\n", c, b, a);
	}
		else {
			printf("el valor del cociente entre c: %d y b: %d, es mayor que a: %d\n", c, b, a);
		}
	if (c/b==-10){
		printf("el valor del cociente entre c: %d y b: %d es igual que -10\n", c, b);
	}
		else{
			printf("el valor del cociente entre c: %d y b: %d es diferente que -10\n", c, b);
		}
	if (a+b+c==5){
		printf("el valor de a: %d + b: %d + c: %d es igual a 5\n", a, b, c);
	}
		else {
			printf("el valor de a: %d + b: %d + c: %d es diferente a 5\n", a, b, c);
		}
	if (a+b==8 && a-b==2){
		printf("el valor de a: %d + b: %d es igual que 8 y el valor de a: %d - b: %d es igual que 2\n", a, b, a, b);
	}
		else if (a+b!=8){
			printf("el valor de a: %d + b: %d es diferente que 8\n", a, b);
		}
			else if (a-b!=2){
				printf("el valor de a: %d - b: %d es diferente de dos\n", a, b);
			}
	if (a>3 && b>3 && c<3){
		printf("el valor de a: %d es mayor que 3 y b ")
	}
			
		
	return 0;
}
