#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() { 
//**************ACTIVIDAD1*****************
	int cantEs=0;
	
	struct estudiantes { //se declara la estructura de datos con una cantidad definida proximamente por el usuario.
		char nombre[50];
		char sexo;
		int edad;
		float nota[5];
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
		printf("Edad: ");
		scanf("%d", &es[i].edad);
		es[i].prom=0;
		for (j=0; j<=4; j++){			//ciclo que recore el vector que almacena las notas.
			printf("indique la nota %d: ", j+1);
			fflush(stdin);
			scanf("%f", &es[i].nota[j]);  //cuanto lo ejecuto el programa no finaliza de manera correcta o en ocaciones cuando comentarizo el proceso de promediar me arroja valores extraños. 
			//gracias por el apoyo.
			fflush(stdin);
			es[i].prom+=es[i].nota[j]; //suma de notas para promedio.
		}
		es[i].prom=es[i].prom/5; //valor final para el promedio de cada estudiante.
	}
	
	int auxProm=0; //auxiliar que almacena por el momento el numero mas alto.
	for (i=0; i<cantEs; i++){		
		if (es[i].prom>es[i+1].prom && es[i].prom>auxProm){
			auxProm=es[i].prom;
			elMayor=i;
		}
	}
	
	printf("\n\nEl estudiante con mayor promedio es:\n%s, sexo: %c\nedad: %d\nnota1: %f\nnota2: %f\nnota3: %f\nnota4: %f\nnota5: %f\nproemdio: %f", es[elMayor].nombre, es[elMayor].sexo, es[elMayor].edad, es[elMayor].nota[0], es[elMayor].nota[1], es[elMayor].nota[2], es[elMayor].nota[3], es[elMayor].nota[4], es[elMayor].prom);
	
	
	
	return 0;
}
