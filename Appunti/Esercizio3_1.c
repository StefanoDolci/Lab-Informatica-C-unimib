#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Programma che dichiara vettore lungo N di int e lo
riempie da input utente
*/

int main(){
	int N = 5;
	int array[N];
	printf("Inserisci i valori di riempimento: \n");
	for(int i=0; i<N; i++){
		scanf("%d", &array[i]);	
	}
	
	
	//ora il programma voglio che trovi il valore minimo
	int indice_min=0;
	
	for(int i=1; i<N; i++){
		if( array[i] < array[indice_min]){
			indice_min = i;
		}
	}

	//ora voglio scambiarlo con l'elemento in prima posizione
	
	int min;
	min = array[indice_min];
	array[indice_min] = array[0];
	array[0] = min;
	
	//ora stampo il valore min e l'array
	
	printf("\nI valori sono:\n");
	for(int i=0; i<N; i++){
		printf(", %d", array[i]);
	}
	printf("\b\n");
	printf("\n Il valore minimo è: %d\n" , min);
	exit(EXIT_SUCCESS);
}

