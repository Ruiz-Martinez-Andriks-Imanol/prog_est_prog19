/* Autor: Andriks Imanol Ruiz Mártinez, Realizado: 28/02/2022
Escuela: Universidad del Valle de Mexico Campus Villahermosa
Materia: Programación Estructrada
Ciclo: 01/2022

Este es un programa de ciclos y condicionales en Lenguaje C de la materia de Programación Estructurada
Muestra el uso de:
 
    -Variables enteras y flotantes
    -printf para mostrar mensajes y variables
    -scanf
    -Funciones
    -Prototipos
    -El uso de include para las librerias
    -Operaciones habilitadas por math.h
    -switch
    -do-while
    -Comentarios para la documentación interna del programa
*/
#include<stdio.h>
#include<math.h>
//Prototipos
void circulo();
void rectangulo();
//Principal
int main(){
	int opcion;
	do {
		printf("Calculo de Areas\n");
		printf("0. Salir\n");
		printf("1. Circulo\n");
		printf("2. Rectangulo\n");
		printf("Selecciona una figura: ");
		scanf("%d",&opcion);
		switch(opcion){
			case 0: printf("Bye...\n");
					break;
			case 1: circulo();
					break;
			case 2: rectangulo();
					break;
			default: printf("Opcion invalida!!!\n");
		}	
	}while(opcion!=0);
	
	return 0;
}
//Funciones
void circulo() {
	float r, a;
	printf("Introduce el radio: ");
	scanf("%f",&r);
	a=M_PI*pow(r,2);
	printf("El area del circulo es %.2f\n",a);
}
void rectangulo() {
	float b, h, a;
	printf("Introduce la base: ");
	scanf("%f",&b);
	printf("Introduce la altura: ");
	scanf("%f",&h);
	a=b*h;
	printf("El area del rectangulo es %.2f\n",a);
}
