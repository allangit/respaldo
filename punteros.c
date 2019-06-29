
#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
struct empleado{

	//string name;
	float salario;


}emp[3],*pointer=emp;

void menu();
void pedir_datos();
void imprimir_datos(struct empleado *pointer);

void main(void){


	menu();

}

void menu(){

	int opcion;

	printf("UNIVERSIDAD FIDELITAS CURSO DE S.O \n");
	printf("TAREA 1 \n");
	printf("INTEGRANTES \n");
	printf("XXXXXXXXXXXXXXXXXXXXXX \n");
	printf("YYYYYYYYYYYYYYYYYYYYYY \n");

	printf("Digite la opcion:=");
	scanf("%d",&opcion);

	while(1) {

		switch(opcion) {


			case 1:
				pedir_datos();
				break;

			case 2:
				imprimir_datos(pointer);
				break;
		case 3:

			printf("Saliendo del programa---->");
			break;
		}
	}
}

void pedir_datos(){

	int i;

	for(i=0; i<3; i++){

		//printf("name:=");
		//scanf("s\n",&(pointer+i)->name);
		printf("salario:=");
                scanf("f\n",&(pointer+i) ->salario);//aqui esta el error

	}


}

void imprimir_datos(struct empleado *pointer) {

	int i;

	for(i=0; i<3; i++){

                printf("%f",(pointer+i)->salario);

        }


}
