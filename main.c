#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* 
Autor: Luis Fernando Flores Diaz
Fecha: 24/10/2019
Grupo: 008
Horario: Sabado 9:00am - 11:00am
Matricula: 1821936
*/

int main() { 
//**************ACTIVIDAD1*****************
	int cantEs=0;
	
	struct estudiantes { //se declara la estructura de datos con una cantidad definida proximamente por el usuario.
		char nombre[50];
		char sexo;
		int edad;
		int nota[5];
		float prom;
	} es[cantEs];
	
	int elMayor; //alamcenara la posicion en el vector de estudiantes con el promedio mas alto.
	
	printf("**************ACTIVIDAD1*****************\n\n"); //se pregunta por la cantidad de estudiantes a validar.
	printf("Cuantos estudiantes recabara datos? ");
	scanf("%d", &cantEs);
	
	int i=0, j=0;
	int si=0; //se utiliza para validar el ingreso de variables
	
	for (i=0; i<cantEs; i++){		//ciclo recaudacion de datos para cada alumno.
		printf("\nIndique el nombre del estudiante%d: ", i+1);
		fflush(stdin);
		gets(es[i].nombre);
		fflush(stdin);
		printf("Sexo(F/M): \n");
		do {		//validacion de ingreso de texto.
			fflush(stdin);
			scanf("%c", &es[i].sexo);
			fflush(stdin);
			if (es[i].sexo=='f' || es[i].sexo=='F' || es[i].sexo=='m' || es[i].sexo=='M') si=1;
			else printf("Indique nuevamente: ");
		} while (si!=1);
		si=0;
		printf("Edad: ");
		scanf("%d", &es[i].edad);
		es[i].prom=0;
		for (j=0; j<5; j++){			//ciclo que recore el vector que almacena las notas.
			printf("indique la nota %d: ", j+1);
			fflush(stdin);
			scanf("%d", &es[i].nota[j]);  //cuanto lo ejecuto el programa no finaliza de manera correcta o en ocaciones cuando comentarizo el proceso de promediar me arroja valores extraños. 
			//gracias por el apoyo.
			fflush(stdin);
			es[i].prom+=es[i].nota[j]; //suma de notas para promedio.
		}
		es[i].prom/=5; //valor final para el promedio de cada estudiante.
	}
	
	int auxProm=0; //auxiliar que almacena por el momento el numero mas alto.
	for (i=0; i<cantEs; i++){		
		if (es[i].prom>es[i+1].prom && es[i].prom>auxProm){
			auxProm=es[i].prom;
			elMayor=i;
		}
	}
	
	printf("\n\nEl estudiante con mayor promedio es:\n%s, sexo: %c\nedad: %d\nnota1: %d\nnota2: %d\nnota3: %d\nnota4: %d\nnota5: %d\nproemdio: %f", es[elMayor].nombre, es[elMayor].sexo, es[elMayor].edad, es[elMayor].nota[0], es[elMayor].nota[1], es[elMayor].nota[2], es[elMayor].nota[3], es[elMayor].nota[4], es[elMayor].prom);
	
	
	//**************ACTIVIDAD2*****************
	printf("\n\n\n**************ACTIVIDAD2*****************\n\n\n");
	i=0;
	si=0;
	int cantPnd=0;
	struct pandas{
		char nombre[20];
		int peso;
		int nac;
		char sexo;
		int tenerBebes;
	} pxndx[cantPnd];
	
	printf("indique la cantidad de pandas para tomar los datos: ");
	scanf("%d", &cantPnd);
	
	for (i=0; i<cantPnd; i++){
		printf("\n\n\nDatos del panda %d\n", i+1);
		printf("Nombre: ");
		fflush(stdin);
		gets(pxndx[i].nombre);
		printf("Peso: ");
		scanf("%d", &pxndx[i].peso);
		printf("Fecha de nacimiento: ");
		scanf("%d", &pxndx[i].nac);
		printf("Sexo: ");
		do {		//validacion de ingreso de texto.
			fflush(stdin);
			scanf("%c", &pxndx[i].sexo);
			if (pxndx[i].sexo=='f' || pxndx[i].sexo=='F' || pxndx[i].sexo=='m' || pxndx[i].sexo=='M') {
				si=1;
				fflush(stdin);
			}
			else printf("Indique nuevamente: ");
		} while (si!=1);
		si=0; //se limpia la variable para el siguiente ingreso de informacion.	
		if (2019-pxndx[i].nac>5 && (pxndx[i].sexo!='m' || pxndx[i].sexo!='M')) pxndx[i].tenerBebes=1;
		else pxndx[i].tenerBebes=0;
	}
	
	for (i=0; i<cantPnd; i++){
		if (pxndx[i].tenerBebes==1){
			printf("\n\n\nEl panda %s\nPeso: %d\nNacimiento: %d\nSexo: %c\nSI pude tener bebes", pxndx[i].nombre, pxndx[i].nac, pxndx[i].sexo);
			
		}
	}
	

	return 0;
}
