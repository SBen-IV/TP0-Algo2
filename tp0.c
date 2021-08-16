#include "tp0.h"

/* ******************************************************************
 *                     FUNCIONES A COMPLETAR
 * *****************************************************************/

/* swap() intercambia dos valores enteros.
 */
void swap (int* x, int* y) {

	int aux = *x;
	*x = *y;
	*y = aux;
}

/* maximo() busca el mayor elemento del arreglo y devuelve su posicion.
 * Si el vector es de largo 0, devuelve -1.
 */
int maximo(int vector[], int n) {

	if(n < 1){
		return -1;
	}

	int pos = 0;

	for(int i = 1; i < n; i++){
		if(vector[pos] < vector[i]){
			pos = i;
		}
	}

	return pos;
}

/* La función comparar recibe dos vectores y sus respectivas longitudes
 * y devuelve -1 si el primer vector es menor que el segundo; 0 si son
 * iguales; y 1 si el segundo es menor.
 *
 * Un vector es menor a otro cuando al compararlos elemento a elemento,
 * el primer elemento en el que difieren no existe o es menor.
 */
int comparar(int vector1[], int n1, int vector2[], int n2) {

	int i = 0, j = 0;

	while(i < n1 && j < n2){
		if(vector1[i] < vector2[j]){
			return -1;
		}
		if(vector1[i] > vector2[j]){
			return 1;
		}
		i++;
		j++;
	}

	if(i == n1 && j < n2){
		return -1;
	}
	if(i < n1 && j == n2){
		return 1;
	}

	return 0;
}

/* selection_sort() ordena el arreglo recibido mediante el algoritmo de
 * selección.
 */
void seleccion(int vector[], int n) {

	int pos_max_elem;

	for(int i = 0; i < n-1; i++){
		pos_max_elem = maximo(vector, n-i);
		swap(&vector[pos_max_elem], &vector[n-i-1]);
	}
}