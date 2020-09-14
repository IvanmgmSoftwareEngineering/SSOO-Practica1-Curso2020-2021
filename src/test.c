/*
 ============================================================================
 Name        : practica1-2020-2021.c
 Author      : IMG
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "libreria.h"

int main(void) {
	int control_errores;
	char entrada_usuario[3];
	int numero_lineas;


	entrada_usuario[0]='\0';
	entrada_usuario[1]='\0';
	entrada_usuario[2]='\0';
	printf("-- Empieza el programa. . . \n");
	printf("\n");
	printf("-- Probando la funcion Head. . . \n");
	printf("\n");
	printf("-- Introduzca por teclado el valor de N (si no introduce ningún valor por defecto N =10): ");
	fgets(entrada_usuario, 3, stdin);


	if(entrada_usuario[0]!='0' &&entrada_usuario[0]!='1'&&entrada_usuario[0]!='2'&&entrada_usuario[0]!='3'&&entrada_usuario[0]!='4'&&entrada_usuario[0]!='5'&&entrada_usuario[0]!='6'&&entrada_usuario[0]!='7'&&entrada_usuario[0]!='8'&&entrada_usuario[0]!='9'){
		printf("---- El valor introducido no es un numero entero, por lo que se tomará el valor por defecto N=10 líneas\n");
		numero_lineas = 10;
		printf("---- N = %i\n",numero_lineas);
		printf("\n");
	}else{
		if(entrada_usuario[1]!='\n' && entrada_usuario[1]!='0' && entrada_usuario[1]!='1'&&entrada_usuario[1]!='2'&&entrada_usuario[1]!='3'&&entrada_usuario[1]!='4'&&entrada_usuario[1]!='5'&&entrada_usuario[1]!='6'&&entrada_usuario[1]!='7'&&entrada_usuario[1]!='8'&&entrada_usuario[1]!='9'){
			printf("---- El valor introducido no es un numero entero, por lo que se tomará el valor por defecto N=10 líneas\n");
			numero_lineas = 10;
			printf("---- N = %i\n",numero_lineas);

		}else{
			if(entrada_usuario[1]!='\n'){
				numero_lineas = (entrada_usuario[0] - '0')*10 + (entrada_usuario[1]-'0');
				printf("---- N = %i",numero_lineas);
				printf("\n");

			}else{
				numero_lineas = (entrada_usuario[0] - '0');
				printf("---- N = %i",numero_lineas);
				printf("\n");

			}
		}
	}
	printf("-- A continuación introduzca por teclado tantas líneas como desee, pulsando enter para pasar a la siguiente línea.\n");
	printf("-- Cuando no desee introducir más líneas por teclado pulse ctrl + d\n");

	control_errores = head(numero_lineas);
	if(control_errores==0){
		printf("-- Hemos terminado de probar la funcion Head y todo ha ido bien \n");
		 printf("---------------------------------------------------------------\n");
		printf("\n");
	}
	else{
		printf("--He habido algún problema en la funcion head() \n");
		printf("\n");
		return control_errores;
	}

	return EXIT_SUCCESS;
}
