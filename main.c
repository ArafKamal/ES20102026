#include <stdio.h>

int main(void) {
    printf("Hello, World!\n");

    /*
    Il padre dichiara questo array: int dati[12] = {3, 7, 2, 9, 4, 6, 8, 1, 5, 10, 2, 7};
    Il padre crea 3 figli con un ciclo for e fork().
    Il figlio i (con i = 0, 1, 2) somma i 4 elementi della sua porzione dell'array,
    cioè dall'indice i*4 all'indice i*4+3.
    Ogni figlio stampa la propria somma parziale e termina con exit(somma).
    In questo esercizio il codice di uscita è l'unico canale di comunicazione.
    Il padre aspetta i figli in ordine con waitpid(pid[i], &status, 0),
    ricava la somma parziale con WEXITSTATUS(status) e la accumula.
    Il padre stampa la somma totale.
    */



    return 0;
}