//
//  main.c
//  Rimuovi Vocali
//
//  Created by Simone Cavicchioli on 22/12/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Acquisire da tastiera 5 parole e successivamente visualizzare le parole a cui sono state rimosse le vocali. Per svolgere questo compito definire ed utilizzare due funzioni con le seguenti finalita':
//  -   Produrre 1 se una data variabile carattere e' una vocale e produrre 0 altrimenti
//  -   Rimuovere da una data variabile stringa le vocali.

#include <stdio.h>

#define DIM 5

int vocale(char c)
{
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return 1;
    else return 0;
}

char *rimuoviVocali(char str[])
{
    int i = 0, j;
    while (str[i] != '\0') {
        if (vocale(str[i]) == 1) {
            for (j = i; str[j] != '\0'; j++) str[j] = str[j + 1];
        }
        else i++;
    }
    return str;
}

int main(void)
{
    int i;
    char parola[DIM][20];
    
    for (i = 0; i < DIM; i++) scanf("%s", parola[i]);
    
    for (i = 0; i < DIM; i++) printf("%s\n", rimuoviVocali(parola[i]));
    
    return 0;
}
