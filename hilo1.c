#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <string.h>

void *mensaje();
//void *matriz(int ma[],int filas);
int ma[10]={2,34,6};
int filas=2;
int cols=2;


void main(){


	pthread_t hilo1;
	//pthread_t hilo2;
	//pthread_create(&hilo2,NULL,matriz,(void *)(&ma,&filas));
	pthread_create(&hilo1,NULL,mensaje,NULL);
	pthread_join(hilo1,NULL);
	//pthread_join(hilo2,NULL);


}

void *mensaje(){

	int i=0;
	char *cadena="Hilo ejecutado";

	for(i=0; i<strlen(cadena); i++){

		printf("%c",cadena[i]);

	}
	printf("\n\n");
}

/*
void *matriz(int ma[],int filas){

	int i,j;
	printf("entra");
	for(i=0 ;i<filas; i++){

                        printf("%d\t",ma[i]);
                }
		printf("\n");
}

*/
