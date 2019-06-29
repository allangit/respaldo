#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *mensaje();

void main() {

	pthread_t hilo;
	pthread_create(&hilo,NULL,mensaje,NULL);
	pthread_join(hilo,NULL);
}


void *mensaje() {

	printf("Bienvenidos al hilo\n");

}
