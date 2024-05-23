#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define k 50  // definiscoi primi 50 termini da calcolare

//qui prima del main vanno tutte le funzioni

float Serie_Leibnitz(void){
    float risultato = 0;
    for(int n = 0; n < k ; n++){
        int segno = -1;
        if((n%2)==0)    //questa condizione mi rappresenta (-1)^n che puo essere pari o dispari 
         segno = 1;
        risultato += (segno)/ (float) (2*n + 1);
    }
    return risultato;
}

// programma che calcola i primi K termini della serie di Leibnitz

int main(void){
    printf("La somma dei primi %d termini della serie è : %.2f\n", k, Serie_Leibnitz());
    exit(EXIT_SUCCESS);
}


