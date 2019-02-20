//
//  main.c
//  Maggior Numero di Vocali e Consonanti
//
//  Created by Simone Cavicchioli on 01/12/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Acquisire da tastiera una sequenza di 50 parole oppure formata da meno di 50 parole e che termina con la prima parola immessa uguale a “0″. Successivamente visualizzare la parola acquisita con il maggior numero di vocali e quella con il maggior numero di consonanti. (E’ vietato l’utilizzo delle funzionalità disponibili tramite la libreria string.h.) Per svolgere questo compito si definiscano ed utilizzino quattro funzioni C con le seguenti finalità:
//  -   Produrre 1 se due date stringhe sono diverse e produrre 0 altrimenti.
//  -   Produrre 1 se un dato carattere è una vocale; produrre 0 altrimenti.
//  -   Produrre 1 se un dato carattere è una lettera; produrre 0 altrimenti.
//  -   Inizializzare gli interi puntati da due dati puntatori a variabili intere con il numero di vocali e consonanti in una data variabile stringa.


//  'a' == Numero del codice ASCII

#include <stdio.h>

#define DIM 5

int stringheDiverse(char str1[], char str2[])
{
    int i;
    for (i = 0; i < str1[i] != '\0'; i++) {
        if (str1[i] != str2[i]) return 1;
    }
    if (str2[i] == '\0') return 0;
    else return 1;
}


int vocale(char c)
{
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return 1;
    else return 0;
}


int lettera(char c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) return 1;
    else return 0;
}


void numeroVocaliConsonanti(char *str, int n, int *nV, int *nC)
{
    int i;
    
    for (i = 0; i < n && str[i] != '\0'; i++)
    {
        if (vocale(str[i]) == 1) (*nV)++;
        else if (lettera(str[i]) == 1) (*nC)++;
    }
}

int main(void)
{
    int r = 0, s = 0, numVocali = 0, numConsonanti = 0, maxVocali = 0, maxConsonanti = 0, bestVocali = 0, bestConsonanti = 0;
    char parole[DIM][50];
    
    do {
        scanf("%50s", parole[r]);
        r++;
    } while (r < DIM && stringheDiverse(parole[r - 1], "0") == 1);
    
    if (stringheDiverse(parole[r - 1], "0") == 1) r--;
    
    for (s = 0; s < r; s++) {
        numVocali = numConsonanti = 0;
        numeroVocaliConsonanti(parole[s], DIM, &numVocali, &numConsonanti);
        if (numVocali >= maxVocali)
        {
            maxVocali = numVocali;
            bestVocali = s;
        }
        if (numConsonanti >= maxConsonanti)
        {
            maxConsonanti = numConsonanti;
            bestConsonanti = s;
        }
    }
    
    printf("Piu' vocali: %s\n", parole[bestVocali]);
    printf("Piu' consonanti: %s\n", parole[bestConsonanti]);

    return 0;
}
