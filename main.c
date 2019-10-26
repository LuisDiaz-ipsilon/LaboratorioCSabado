#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 
Autor: Luis Fernando Flores Diaz
Fecha: 26/10/2019
Grupo: 008
Horario: Sabado 9:00am - 11:00am
Matricula: 1821936
 */
 
 
int i=0;		//se declara un controlador para un ciclo for.

int modulo (int x){  //se declara la funcion que calcula el modulo.
	int z=0;
	for (i=2; i<x; i++){
		if (x%i==0) z=1; //si la z vale 1 es divisible por lo tanto no es primo
	}
	if (x==2) z=1;  //se el numero a validar es dos, este esta afuera de el ciclo. para verificar.
	return z;
}

int elevar(int n, int p){		//se declara la segunda funcion en donde se calcula la potencia p a un numero n.
	int resultado;
	return resultado= pow (n, p);
}
 
int main() { 
//**************ACTIVIDAD1*****************
	printf("**************ACTIVIDAD1*****************\n\n");
	int x2, z2;
	do {
	printf("Indique le numero primo para verificar: ");
	scanf("%d", &x2);
	} while (x2<=0);  //se valida que el numero sea mayor que cero.
	z2= modulo(x2);  //se hace uso de la funcion modulo.
	if (z2!=0) printf("El numero NO es primo");  //se imprimen los resultados.
	else printf("el numero  es primo");

//**************ACTIVIDAD2*****************
	int n2, p2, resultado2;
	printf("\n\n**************ACTIVIDAD2*****************\n\nElevar un numero\nindique el numero: ");
	scanf("%d", &n2);
	printf("indique la potencia: ");
	scanf("%d", &p2);
	resultado2= elevar (n2, p2);  //se hace uso de la funcion elevar. 
	printf("\nEl resultado es: %d", resultado2); //se imprime el resultado.




	return 0;
}
