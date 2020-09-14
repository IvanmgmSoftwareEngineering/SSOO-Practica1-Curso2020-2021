/*
 * test.c
 *
 *  Created on: Sep 14, 2020
 *      Author: IvanMGM
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libreria.h"


/*
Nombre función:				head
Parámetros entrada función:	int N. Representa las N's primeras líneas que queremos mostrar
Salida función:				int. Devuelve 0 si todo ha ido bien. Devuelve -1 si ha ocurrido un error
Descripción: 				Se comporta de la misma forma que head(1) leyendo de la entrada estándar, es decir, muestra
							las N primeras líneas en la salida estándar recibidas por la entrada estándar.
 */
int head (int N){

	//zona de declaración de variables
	 int i, lineas;
	 char buf[1024];
	 int cuenta;
	 char **lineasTexto;
	 //FIN zona de declaración de variables

	//zona de asignación de variables
	lineas=N;
	i=0;
	cuenta = 0;
	//FIN zona de asignación de variables

	 lineasTexto = (char**)malloc(1024*lineas);
	 if (lineasTexto == NULL){ //manejo de errores de malloc
	 		printf("Ha habido un problema con la función malloc()");
	 		return -1;
	 }
	 while(i<lineas){
	      	lineasTexto[i] = (char*)malloc(1024);
	      	if (lineasTexto[i] == NULL){ //manejo de errores de malloc
	      		 printf("Ha habido un problema con la función malloc()");
	      		 return -1;
	      	}
	        i++;
	 }
	 while(fgets(buf, 1024, stdin) != NULL){
			if(cuenta<lineas){
				strcpy(lineasTexto[cuenta],buf);
				cuenta++;
			}
	}
	 printf("\n");
	 printf("-- La función head esta analizando las líneas introducidas. . .\n");
	 printf("------------------------------\n");
	 printf("-- Las %i primeras lineas son: \n",lineas);
	 printf("\n");
	if(cuenta<lineas){
		for (int z=0;z<cuenta;z++){
	        printf("%s",lineasTexto[z]);
	    }
	}
	else{
		for (int z=0;z<lineas;z++){
			printf("%s",lineasTexto[z]);
	    }
	}
	printf("\n");
	for(int z=0;z<lineas;z++){
		free(lineasTexto[z]);
	}
	rewind(stdin);
	free(lineasTexto);
	return 0;
}

/*
Nombre función:				tail
Parámetros entrada función:	int N. Representa las N's últimas líneas que queremos mostrar
Salida función:				int. Devuelve 0 si todo ha ido bien. Devuelve -1 si ha ocurrido un error
Descripción: 				Se comporta de la misma forma que tail(1) leyendo de la entrada estándar, es decir, muestra
							las N últimas líneas en la salida estándar recibidas por la entrada estándar.
 */
int tail (int N){


	return 0;
}
/*
Nombre función:				longlines
Parámetros entrada función:	int N. Representa las N's líneas más largas que queremos mostrar, ordenadas de mayor a menor longitud
Salida función:				int. Devuelve 0 si todo ha ido bien. Devuelve -1 si ha ocurrido un error
Descripción: 				Muestra las N líneas más largas recibidas de mayor a menor longitud, o todas ellas si hay
							menos de N líneas, por la entrada estándar de forma ordenada en la salida estándar.
 */

int longlines (int N){


	return 0;
}
