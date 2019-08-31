#include <stdio.h>


/* 
Autor: Luis Fernando Flores Diaz
Fecha: 31/08/2019
Grupo: 008
Horario: Sabado 9:00am - 11:00am
Matricula: 1821936
 */

int main() {
	/*****Actividad 1*****/
	printf("ACTIVIDAD 1\n\n\n");
	int numeroUno, numeroDos;
	
	printf("indroduzca el primer numero\n"); /* se solicita al usuario los numeros a validar*/
	scanf("%d", &numeroUno);
	printf("introduzca el desgundo numero\n");
	scanf("%d", &numeroDos);
	
	if (numeroUno==numeroDos){
		printf("los dos numeros son iguales\n\n"); /* en este caso se campararan, en caso cierto se le indicara que son iguales*/
	}
	else if (numeroUno<numeroDos){
		printf("el numero %d, es mas grande que %d\n\n", numeroDos, numeroUno);  /* LINEAS 25-29 en esta seccion se valida cual numero es el mas grande*/
	}
	else if (numeroUno>numeroDos){
		printf("el numero %d, es mas grande que %d\n\n", numeroUno, numeroDos);
	}
	
	/**********************ACTIVIDAD 2******************/
	
	printf("ACTIVIDAD 2\n\n\n");
	
	int a, b, c;	/*se declaran las variables */
	
	a=5;			/*LINEAS: 38-40 en esta seccion se asignan valores default a las variables */
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
		printf("el valor del cociente entre c: %d y b: %d, es menor que a: %d\n", c, b, a);  /* validacion para verificar si el cocinte de c y b es menor que a*/
	}
		else {
			printf("el valor del cociente entre c: %d y b: %d, es mayor que a: %d\n", c, b, a); /* caso en donde el cociente de la validacion anterior es falsa*/
		}
	if (c/b==-10){																			/* condicion para conocer si c entre b es gual a -10*/
		printf("el valor del cociente entre c: %d y b: %d es igual que -10\n", c, b); 
	}
		else{
			printf("el valor del cociente entre c: %d y b: %d es diferente que -10\n", c, b);  /*la contraparte de la validacion de c entre b es gual a -10 */
		}
	if (a+b+c==5){
		printf("el valor de a: %d + b: %d + c: %d es igual a 5\n", a, b, c);  /* condicion para conocer si la suma de a, b, c, es igual a 5*/
	}
		else {
			printf("el valor de a: %d + b: %d + c: %d es diferente a 5\n", a, b, c);  /* este entonces es encaso de ser falsa la condicion anterior*/
		}
	if (a+b==8 && a-b==2){																	/* condicion para concer si a mas b es igual a ocho y tambien si a menos b es igual 2*/
		printf("el valor de a: %d + b: %d es igual que 8 y el valor de a: %d - b: %d es igual que 2\n", a, b, a, b);  
	}
		else if (a+b!=8){
			printf("el valor de a: %d + b: %d es diferente que 8\n", a, b);				/* parte en donde se valida por que no se cumplio la primera condicion y cual operacion seria el motivo de la negacion*/
		}
			else if (a-b!=2){
				printf("el valor de a: %d - b: %d es diferente de dos\n", a, b);   /* parte en donde se valida por que no se cumplio la primera condicion y cual operacion seria el motivo de la negacion*/
			}	
	if (a>3 && b>3 && c<3){															/* condicion para conocer si a y b son mayores que tres y c menor que 3*/
		printf("el valor de a: %d y b: %d es mayor que 3 y tambien  c: %d es menor que 3\n\n\n", a, b, c); 
	}
		else if (a<=3){
		printf("el valor de a: %d es menor o igual que tres, por eso no cumple la condicion \"a>3 && b>3 && c<3\"\n\n\n", a ); /* parte en donde se valida por que no se cumplio la principal condicion y cual operacion seria el motivo de la negacion*/
		}
			else if(b<=3){
			printf("el valor de b: %d es menor o igual que 3, por eso no cumple la condicion \"a>3 && b>3 && c<3\"\n\n\n", b); /* parte en donde se valida por que no se cumplio la principal condicion y cual operacion seria el motivo de la negacion*/
			}
				else if(c>=3){
				printf("el valor de c: %d es mayor o igual que tres, por eso no cumple la condicion \"a>3 && b>3 && c<3\"\n\n\n",c); /* parte en donde se valida por que no se cumplio la principal condicion y cual operacion seria el motivo de la negacion*/
					}
/*******************ACTIVIDAD EXTRA*****************/
	printf("ACTIVIDAD EXTRA\n\n\n");					
	printf("indique el valor para la varaiable A\n");  				/*lineas: 113-118 se solicitan las varables para hacer la validez de los incisos de la actividad 2 */
	scanf("%d", &a);
	printf("indique el valor para la varaiable B\n");
	scanf("%d", &b);
	printf("indique el valor para la varaiable C\n");
	scanf("%d", &c);
	
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
		printf("el valor del cociente entre c: %d y b: %d, es menor que a: %d\n", c, b, a);  /* validacion para verificar si el cocinte de c y b es menor que a*/
	}
		else {
			printf("el valor del cociente entre c: %d y b: %d, es mayor que a: %d\n", c, b, a); /* caso en donde el cociente de la validacion anterior es falsa*/
		}
	if (c/b==-10){																			/* condicion para conocer si c entre b es gual a -10*/
		printf("el valor del cociente entre c: %d y b: %d es igual que -10\n", c, b); 
	}
		else{
			printf("el valor del cociente entre c: %d y b: %d es diferente que -10\n", c, b);  /*la contraparte de la validacion de c entre b es gual a -10 */
		}
	if (a+b+c==5){
		printf("el valor de a: %d + b: %d + c: %d es igual a 5\n", a, b, c);  /* condicion para conocer si la suma de a, b, c, es igual a 5*/
	}
		else {
			printf("el valor de a: %d + b: %d + c: %d es diferente a 5\n", a, b, c);  /* este entonces es encaso de ser falsa la condicion anterior*/
		}
	if (a+b==8 && a-b==2){																	/* condicion para concer si a mas b es igual a ocho y tambien si a menos b es igual 2*/
		printf("el valor de a: %d + b: %d es igual que 8 y el valor de a: %d - b: %d es igual que 2\n", a, b, a, b);  
	}
		else if (a+b!=8){
			printf("el valor de a: %d + b: %d es diferente que 8\n", a, b);				/* parte en donde se valida por que no se cumplio la primera condicion y cual operacion seria el motivo de la negacion*/
		}
			else if (a-b!=2){
				printf("el valor de a: %d - b: %d es diferente de dos\n", a, b);   /* parte en donde se valida por que no se cumplio la primera condicion y cual operacion seria el motivo de la negacion*/
			}	
	if (a>3 && b>3 && c<3){															/* condicion para conocer si a y b son mayores que tres y c menor que 3*/
		printf("el valor de a: %d y b: %d es mayor que 3 y tambien  c: %d es menor que 3, \nes por eso que se cumple: \"a>3 && b>3 && c<3\" \n", a, b, c); 
	}
		else if (a<=3){
			printf("el valor de a: %d es menor o igual que 3, por eso no cumple la condicion \"a>3 && b>3 && c<3\"\n", a ); /* parte en donde se valida por que no se cumplio la principal condicion y cual operacion seria el motivo de la negacion*/
		}
			else if(b<=3){
				printf("el valor de b: %d es menor o igual que 3, por eso no cumple la condicion \"a>3 && b>3 && c<3\"\n", b); /* parte en donde se valida por que no se cumplio la principal condicion y cual operacion seria el motivo de la negacion*/
			}
				else if(c>=3){
					printf("el valor de c: %d es mayor o igual que 3, por eso no cumple la condicion \"a>3 && b>3 && c<3\"\n",c); /* parte en donde se valida por que no se cumplio la principal condicion y cual operacion seria el motivo de la negacion*/
					}
	
	return 0;
}
