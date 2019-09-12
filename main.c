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
		printf("ERROR: Nota incorrecta\n\n\n");
	}
		else if (nota>=5){					//se confirma caso positivo.
			printf("APTO\n\n\n");
		}
			else if (nota<5){				//se confirma caso negativo.
				printf("NO APTO\n\n\n");
			}
			
//**************ACTIVIDAD2*****************

	int diaSemana;
	
		
	printf("Indique el numero del dia de la semana\n");		//se solicita el numero del dia de la semana.
	scanf("%d", &diaSemana);
	
	if (diaSemana<1 || diaSemana>7 ){						//condicion para verificar que el cliente ingrese un dia correcto.
		printf("ERROR: no indico un dia correcto.\n\n");
	}
	else if(diaSemana==1){									//lines 39-66, casos en donde se menciona el dia de la semana segun el dato ingresado por cliente.
		char dia[]="lunes";
		printf("el dia de la semana es %s.\n\n", dia);
	}
	else if(diaSemana==2){
		char dia[]="martes";
		printf("el dia de la semana es %s.\n\n", dia);
	}
	else if(diaSemana==3){
		char dia[]="miercoles";
		printf("el dia de la semana es %s.\n\n", dia);
	}
	else if(diaSemana==4){
		char dia[]="jueves";
		printf("el dia de la semana es %s.\n\n", dia);
	}
	else if(diaSemana==5){
		char dia[]="viernes";
		printf("el dia de la semana es %s.\n\n", dia);
	}
	else if(diaSemana==6){
		char dia[]="sabado";
		printf("el dia de la semana es %s.\n\n", dia);
	}
	else if(diaSemana==7){
		char dia[]="domingo";
		printf("el dia de la semana es %s.\n\n", dia);
	}
		
		


	return 0;
}
