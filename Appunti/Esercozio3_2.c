#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define L= 6.9


int main(){
	int N = 5;
	float array[N];
    float finale[N];

	printf("Inserisci i valori di riempimento: \n");
	for(int i=0; i<N; i++){
		scanf("%d", &array[i]);	
	}
	
    for(int i=0; i<N; i ++){
        for(int j=0; j<N; j++){
            if(array[i] <= L){
                finale[i]


            }
             

        }
       


    }





	exit(EXIT_SUCCESS);
}







