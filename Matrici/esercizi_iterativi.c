/*
- Esercizio: Compilatore tabelline.
- Argomento: Cicli iterativi (for).
- Descrizione: Il programma chiede all'utente un numero intero
  e ne strampa la tabellina da 1 a 10.
*/

#include <stdio.h>

int main(){
    
    int N;
    
    printf("Inserisci il numero della tabellina che vuoi: ");
    scanf("%d", &N);
    
    for(int i=1; i <=10; i++){
        printf("%d\n", N * i);
    }
    return 0;
}
