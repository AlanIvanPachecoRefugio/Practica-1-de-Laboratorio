/*Pacheco Refugio Alan Ivan
Paradigmas de Programacion
Practica de Laboratorio 1
Versión 2.0
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//Funcion que generara los numeros aleatorios  		(1)
void Generador(){
	printf("Ya se ha generado el arreglo de numeros aleatorios. \n");
}


//Funcion para imprimir los numeros aleatorios			(2)
void Impresion(){
	printf("Ya se ha impreso el arreglo de numeros aleatorios sin ordenar. \n");
	
}


void Busqueda(){
    printf("Busqueda\n");
}

//Funcion que hará el ordenamiento el arreglo			(4)
void Ordenamiento(int arr[], int n){
	int i, j, key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}


//Funcion que ejemplifica la busqueda del arreglo resultado de la opcion 4			(5)
void Ejemplifica() {
	printf("La busqueda del numero esta en: \n");
	
}


//Funcion que calcula el tiempo de ejecucion de las opciones			(6)
void Calculo() {
	
	printf("El tiempo de ejecucion es: \n");
	
	
}




int main() {
    int n; 
    printf("Ingrese el tamano de 1000 numeros aleatorios ");
    scanf("%d", &n);

    if (n <= 0 || n >= 1001) {
        printf("El tamano de tiene que ser de 1000.\n");
        return 1; 
    }

    srand(time(NULL));

    int arreglo[n];

    for (int i = 0; i < n; i++) {
        arreglo[i] = rand() % 1000 + 1; 
    }


    printf("Numeros antes de ordenar:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");

    int opcion;
    printf("Estos son los numeros aleatorios impresos y generados. \n\n");
	printf("Selecciona la opcion que desea realizar:  \n\n");
	printf("1. Generar un arreglo de numeros aleatorios\n");
	printf("2. Imprimir el arreglo de numeros aleatorios\n");
	printf("3. Hacer una busqueda secuencial del arreglo de numeros aleatorios\n");
	printf("4. Ordenar el arreglo de numeros aleatorios\n");
	printf("5. Ejemplificar la busqueda del arreglo resultando de la opcion 4\n");
	printf("6. Calculo del tiempo de ejecucion de las opciones 1 - 5\n");
	scanf("%d", &opcion);

    switch(opcion) {
		case 1:
			Generador(arreglo, n);
			break;
		case 2:
			Impresion(arreglo, n);
			break;
		case 3:
			Busqueda(arreglo, n);
			break;
		case 4:
			Ordenamiento(arreglo, n);
			break;
		case 5: 
			Ejemplifica(arreglo, n);
			break;
		case 6:
			Calculo(arreglo, n);
			break;
		default:
			printf("Ingrese una opcion valida del 1 al 6, por favor.\n");
			return 1;	
	}	

    printf("Lista ordenada:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");

    return 0; 
}