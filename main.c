#include <stdio.h>
/* 
Autor: Luis Fernando Flores Diaz
Fecha: 11/09/2019
Grupo: 008
Horario: Sabado 9:00am - 11:00am
Matricula: 1821936
 */

int main(){
	//**************ACTIVIDAD1*****************
	
	float nota;								//se declara la variable para la nota del cliente.
	
	printf("Indique la nota obtenida:\n");  //se le pide al usuario la nota para ser evaluada.
	scanf("%f", &nota);
	
	if (nota<0 || nota>10 ){				//primero se valida si la nota es correcta.
		printf("ERROR: Nota incorrecta\n");
	}
		else if (nota>=5){					//se confirma caso positivo.
			printf("APTO\n");
		}
			else if (nota<5){				//se confirma caso negativo.
				printf("NO APTO\n");
			}
			
//**************ACTIVIDAD2*****************



	return 0;
}
