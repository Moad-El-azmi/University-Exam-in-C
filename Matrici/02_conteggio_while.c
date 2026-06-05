/*
  Esercizio: Conteggio personalizzato
  Argomento: Cicli iterativi (while)
  Descrizione: Il programma chiede all'utente un limite numerico
  e utilizza un ciclo while per contare da 1 fino al traguardo inserito,
  dimostrando la gestione di un contatore e di una condizione dinamica.
 */

#include <stdio.h>

int main(){

    int i=1;

    int limite;

    printf("A che numero vuoi che mi fermi? ");
    scanf("%d", &limite);

    while(i<=limite){
        
        printf("%d\n", i);
        i++;

    }
    return 0;
}
