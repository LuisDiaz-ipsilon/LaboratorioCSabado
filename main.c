#include <stdio.h>
/* 
Autor: Luis Fernando Flores Diaz
Fecha: 21/09/2019
Grupo: 008
Horario: Sabado 9:00am - 11:00am
Matricula: 1821936
*/

int main() {
	//**************ACTIVIDAD 1************************
	printf("+++++++++ACTIVIDAD 1++++++++\n\n");

	float calificacion, promedio=0;	//se declaran las variables para promedio y calificaciones para obtener un resultado preciso
	int examen;						//variable que contara la cantidad de examenes
	
	for (examen=1; examen<=10; examen+=1){			//se crea ciclo para obtener las calificaciones.
		printf("indique la calificacion del examen %d\n", examen);  
		scanf("%f", &calificacion);
		promedio+=calificacion;				//se almacena la suma de las calificaciones.
	}
	promedio/=10;				//se realiza operacion para el promedio final.
	
	printf("El promedio del alumno es: %f\n", promedio);		//se muestra en pantalla el promedio final.
	if (promedio>7) printf("APROBADO"); //linea 23,24: se muestra en pantalla el estatus del alumno.
	else printf("REPROBADO");
	
	
	//**************ACTIVIDAD2*****************
	printf("\n\n+++++++++ACTIVIDAD 2++++++++\n\n");
	
	int base, exponente, i, resultado=1;		//se declaran las variables de tipo entero. se declara la varibale que almacera el seultado como 1, para poder inciar en el ciclo con el numero base.
	
	printf("Indique la base del numero\n");		//lineas 34-37: se solicita base y exponente del numero.
	scanf("%d", &base);
	printf("Indique el exponente\n");
	scanf("%d", &exponente);
	
	resultado*=base;			//para ejecutar de manera correcta la operacion se iguala el resultado a la base obtenida por teclado.
	
	for (i=2; i<=exponente; i++){		//se inicia el ciclo desde 2 ya que al menos se ejecutara una vez como en el caso de que el exponente sea 1.
		resultado=resultado*base;		//operacion que realizara hasta llegar al exponente indicado.
	}
	
	printf("un numero %d elevado a %d da como resutado: %d", base, exponente, resultado);	//se imprime el resultado.
	

	
	return 0;
}
