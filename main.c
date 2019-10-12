#include <stdio.h>
#include <string.h>

int main() {
	//**************ACTIVIDAD1*****************
	char cadena1[]="yo soy";
	int x=strlen(cadena1), i=0, verificacion=0, y;
	char cadena2[]={};
	
	for (i=0; i<x; i++){
		if (cadena1[i]!=' '){
			cadena2[i]=cadena1[i];
		}
	}
	printf("\n");
	
	y=strlen(cadena2)-1;
	for (i=0; i<y; i++){
		if (cadena2[i]!=cadena2[y]){
			verificacion=1;
		}
		y--;
	}
	//printf("%d, %d, %d", i, x, verificacion);
	if (verificacion==0) printf("la cadena es palindromo");
		
	//**************ACTIVIDAD2*****************
/*	char cadena2[]={'R','D','F','F','F','A','G','I','R','T','Y','H','B','B','N','S','A','A','Q','C',};
	int y=strlen(cadena2);
	
	for (i=0; i<y; i++){*/
		 
		
	//}

	
	return 0;
}
