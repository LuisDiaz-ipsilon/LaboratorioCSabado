#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 
Autor: Luis Fernando Flores Diaz
Fecha: 02/11/2019
Grupo: 008
Horario: Sabado 9:00am - 11:00am
Matricula: 1821936
*/

int contadorV(char *frase){		//ACTIVIDAD 1
	int vocales=0;
	int i=0;
	int x=strlen(frase);
	for (i=0; i<x; i++){
		if (frase[i]=='a' || frase[i]=='A') vocales++;
		if (frase[i]=='e' || frase[i]=='E') vocales++;
		if (frase[i]=='i' || frase[i]=='I') vocales++;
		if (frase[i]=='o' || frase[i]=='O') vocales++;
		if (frase[i]=='u' || frase[i]=='U') vocales++;
	}
	return vocales;
}

void sumar(int *v1, int *v2){
	int suma=*v1+*v2;
	printf("\n\nLa suma de las variables es: %d", suma);
}

int main() {
	//**************ACTIVIDAD1*****************

	char frase[100];
	printf("Contador de vocales\nFrase: ");
	gets(frase);
	printf("\nLa cantidad de vocales es: %d\n\n\n", contadorV(&frase));

	//**************ACTIVIDAD2*****************
	int v1, v2;
	printf("Sumar variables\nIndique el primer valor: ");
	scanf("%d", &v1);
	printf("Segundo valor: ");
	scanf("%d", &v2);
	sumar(&v1, &v2);

	return 0;
}
