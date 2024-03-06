#include <stdio.h>

int main() {
    char altraOperazione;

    do {
        // Dichiaro le variabili
        float valore1, valore2, result;

        printf("\nInserisci il primo numero: ");
        scanf("%f", &valore1);

        printf("Inserisci il secondo numero: ");
        scanf("%f", &valore2);

        // Moltiplico i valori
        result = valore1 * valore2;

        // Visualizzo il risultato 
        printf("Il risultato di %.2f * %.2f è: %.2f\n", valore1, valore2, result);

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