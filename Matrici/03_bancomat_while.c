/*
  Esercizio: Simulatore Bancomat (Controllo PIN)
  Argomento: Cicli iterativi (while)
  Descrizione: Il programma simula l'accesso a un bancomat. 
  Chiede all'utente di inserire un PIN e continua a richiederlo 
  ciclicamente finché non viene inserita la sequenza corretta (1234).
  Dimostra l'uso del ciclo while per gestire un numero di tentativi 
  potenzialmente infinito.
 */
#include <stdio.h>

int main(){
    int pin_inserito;
    
    printf("Inserisci il pin: ");
    scanf("%d", &pin_inserito);
    
    
    while(pin_inserito !=1234){
        printf("Pin errato, riprova: ");
        scanf("%d", &pin_inserito);
    }
    
    printf("\nAccesso consentito\n");
    
    return 0;
}
