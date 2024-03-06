#include <stdio.h>

int main() {
    char altraOperazione;

    do {
        // Dichiaro le variabili
        int   num1;
        int   num2;
        float result;

        printf("\nInserisci il primo numero: ");
        scanf("%d", &num1);

        printf("Inserisci il secondo numero: ");
        scanf("%d", &num2);

        // Eseguo il caloclo
        result = ( num1 + num2 ) / 2;

        // Visualizzo il risultato 
        printf("la media è: %.2f\n", result);

        // Chiedo all'utente se vuole eseguire un'altra operazione
        printf("Vuoi eseguire un'altra operazione? (y/n): ");
        
        // eseguo loop per le varie risposte ed eventualmente eseguire un'altra operazione
        while (1) {
            scanf(" %c", &altraOperazione);
            if (altraOperazione == 'y' || altraOperazione == 'Y' || altraOperazione == 'n' || altraOperazione == 'N') {
                break; // input dell'utente corretto, esco dal loop
            } else {
                printf("Inserire un comando valido! (y/n): ");
            }
        }

    } while (altraOperazione == 'y' || altraOperazione == 'Y');

    // Visualizzo messaggio nel caso l'utente non voglia effettuare altre operazioni
    if (altraOperazione == 'n' || altraOperazione == 'N') {
        printf("Alla prossima!\n");
    }

    return 0;
}