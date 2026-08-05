/*
  Esercizio: Controllo e Somma Multipli in Matrice
  Argomento: Matrici bidimensionali, cicli annidati (for), variabili flag
  Descrizione: La funzione analizza una matrice per verificare se in ogni 
  sua riga è presente almeno un numero multiplo di 7.

  Utilizza cicli for annidati ottimizzati tramite l'uso di variabili "flag" 
  (es. tutteLeRigheOk) per interrompere immediatamente l'esecuzione se una 
  riga fallisce il test, evitando calcoli inutili.

  Se la condizione è rispettata per tutte le righe, restituisce la somma 
  del primo multiplo di 7 trovato in ciascuna riga. In caso contrario, 
  o se la matrice è vuota, restituisce 0.


  Exercise: Matrix Multiple Check and Sum
  Topic: 2D Arrays, nested loops (for), flag variables
  Description: The function analyzes a matrix to verify if every row 
  contains at least one multiple of 7.

  It uses nested for loops optimized with "flag" variables 
  (e.g., tutteLeRigheOk) to immediately halt execution if a row fails 
  the test, avoiding unnecessary calculations.

  If the condition is met for all rows, it returns the sum of the first 
  multiple of 7 found in each row. Otherwise, or if the matrix is empty, 
  it returns 0.
*/

#include <stddef.h>
#include <stdbool.h>

int e1(size_t rows, size_t cols, const int mat[rows][cols]) {
   
    int somma = 0;
    int risultatoFinale = 0;
    int tutteLeRigheOk = 1;

    for (size_t r = 0; r < rows && tutteLeRigheOk; r++) {
        int trovatoInQuestaRiga = 0;
        for (size_t c = 0; c < cols && !trovatoInQuestaRiga; c++) {
            if (mat[r][c] % 7 == 0) {
                somma += mat[r][c];
                trovatoInQuestaRiga = 1;
            }
        }
        if (!trovatoInQuestaRiga) {
            tutteLeRigheOk = 0;
        }
    }

    if (tutteLeRigheOk && rows > 0) {
        risultatoFinale = somma;
    } else {
        risultatoFinale = 0;
    }

    return risultatoFinale;
}
