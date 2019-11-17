#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 
Autor: Luis Fernando Flores Diaz
Fecha: 16/11/2019
Grupo: 008
Horario: Sabado 9:00am - 11:00am
Matricula: 1821936
*/
int main(){
	//**************ACTIVIDAD1*****************
/*	FILE *archivo;//se declara el puntero para maenejar archivo.
	
	archivo= fopen("archivo1.txt", "r"); //se abre en modo r para solo lectura.
	if(archivo == NULL){
		printf("no se a podido abrir el fichero");//este es el caso en donde el fichero no exista.
	}
	
	char cadenaAux;//se declara una segunda cadena para concatenar y poder aplicar funcions de string.
	char aux;//auxiliar para almacenar la letra e impimir el texto original.
	while (aux!=EOF){
		aux=fgetc(archivo);
		printf("%c", aux);
		srtcat(cadenaAux, aux);//se concateca letra por letra a la segunda cadena auxiliar
	}
	
	printf("\n");
	
	int x=strlen(cadenaAux); //se toma en cuenta la cantidad de caracteres de la cadena para recorrer del final hacia el inicio imprimiendo el texto al reves
	int i=0;
	printf("%d", x);
	for (i=x; i>0; i--){
		printf("%c", cadenaAux[i]);//impresion de la cadena al reves
	}
	printf("\n");
	
	fclose(archivo); //se cierra el archivo.*/
	
	
	//**************ACTIVIDAD2*****************
	FILE *numAB;
	FILE *sum;
	
	int suma=0;
	numAB= fopen("numeros.txt", "r"); //se abre en modo r slo para leer el contenido.
	int aux;//auxiliar para almacenar la suma de los digitos. 
	while (aux!=EOF){
		aux=fgetc(numAB);
		suma+=aux;
	}
	
	sum=fopen("suma.txt", "a"); //se abre en modo a para añadir infomracion al final.
	fprintf(suma, "la suma de los numeros es: %d", suma);//se imprime en el fichero el resultado.
	
}
