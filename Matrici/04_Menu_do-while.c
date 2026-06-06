/*
  Esercizio: Menu Interattivo
  Argomento: Cicli iterativi (do-while)
  Descrizione: Il programma simula il menu principale di un videogioco.
  Utilizza il costrutto do-while per garantire che le opzioni vengano
  mostrate a schermo almeno una volta, e continua a riproporle finché 
  l'utente non digita il comando di uscita (3).
 */
#include <stdio.h>

int main() {
    
    int scelta;
    
    do {
        printf("1) Inizia partita\n");
        printf("2) Opzioni\n");
        printf("3) Esci dal gioco\n");
    
        printf("Cosa scegli? "); 
        scanf("%d", &scelta);
        
        printf("\n"); 
        
    } while(scelta != 3);
    
    printf("Uscita in corso...\n");
    
    return 0;
}
