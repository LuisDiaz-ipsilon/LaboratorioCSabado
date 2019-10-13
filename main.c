#include <stdio.h>
#include <string.h>

/* 
Autor: Luis Fernando Flores Diaz
Fecha: 12/10/2019
Grupo: 008
Horario: Sabado 9:00am - 11:00am
Matricula: 1821936
 */
 
 //Una disculpa maesstro, no pude hacer de manera correcta las dos actividades.


int main() {
	//**************ACTIVIDAD1*****************
	printf("**************ACTIVIDAD1*****************");
	char cadena1[]="yosoy";	//se declara la palabra la frase palindroma.
	int x=strlen(cadena1), i=0, verificacion=0, y;		//se lee la cantidad de letras de la frase, i como un controlador de ciclos
	//y "verificaicon" para validar que las letras comparadas.
	char cadena2[]={}; //una segunda cadena en donde se elimanaran los espacios de la frase de la primera cadena
	
	for (i=0; i<x; i++){		//ciclo para eliminar los espacios
		if (cadena1[i]!=' '){
			cadena2[i]=cadena1[i];
		}
	}
	printf("\n");
	
	y=strlen(cadena2)-1;  //ciclo que verifica la primera letra de la cadena2 con la ultima, asi hata llegar a sus extremos.
	for (i=0; i<y; i++){
		if (cadena2[i]!=cadena2[y]){
			verificacion=1;
		}
		y--;
	}
	//printf("%d, %d, %d", i, x, verificacion);
	if (verificacion==0) printf("la cadena es palindromo\n");		//condicion en caso de que la frase se palindromo.
	else printf("la cadena NO es palindromo");		//se ejecutara en caso negativo de verificacion de frase.
		
	//**************ACTIVIDAD2*****************
	printf("\n**************ACTIVIDAD2*****************\n");
	char cadena3[]={'A','D','F','F','F','A','G','I','R','T','Y','H','B','B','N','S','A','A','Q','C'}; //se declara la cadena a verificar.
	int u=strlen(cadena3), j, cantidad=0;		//"u" como cantidad de espacios de la cadena, j como controlador, "cantidad" como un contador de repeticione de letras en la cadena.
	
	for (i=65; i<91; i++){			//ciclo que verifica A hasta Z.
		for (j=0; j<u; j++){		//ciclo que verifica que la letra A-Z sea igual a la que se ecuentra en espacio de la cadena.
			if 	(cadena3[j]==i) cantidad+=1;
			if (cadena3[j]==i) printf("%c: %d\n", cadena3[j], cantidad);		//impresion de resultados.
			}
		cantidad=0;		//se reinicia la variable que almacena la cantidad de repeticiones de letras.
		}
	return 0;
}
