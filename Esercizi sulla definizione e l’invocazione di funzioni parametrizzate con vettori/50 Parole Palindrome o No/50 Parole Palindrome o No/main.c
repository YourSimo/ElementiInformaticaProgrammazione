//
//  main.c
//  50 Parole Palindrome o No
//
//  Created by Simone Cavicchioli on 01/12/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Acquisire da tastiera una sequenza di 50 parole oppure formata da meno di 50 parole e che termina con la prima parola immessa uguale a "0". Successivamente visualizzare tutte le parole palindrome acquisite. (E’ vietato l’utilizzo delle funzionalità disponibili tramite la libreria string.h.) Per svolgere questo compito si definiscano ed utilizzino due funzioni C con le seguenti finalità:
//  -   Produrre 1 se due date stringhe sono diverse e produrre 0 altrimenti.
//  -   Produrre 1 se una data stringa è palindroma e produrre 0 altrimenti.

//  parola_1
//  parola_2

//  stringa: sequenza di caratteri "abc"

#include <stdio.h>

#define DIM 5

/*  int StringheDiverse(char str1[], char str2[])
{
    int i;
    
    for (i = 0; str1[i] != '\0'; i++) if(str1[i] != str2[i]) return 1;
    
    if (str2[i] == '\0') return 0;
    else return 1;
}
*/

int StringheDiverse(char str1[], char *c)
{
    if (str1[0] == *c) return 0;
    else return 1;
}


int palindroma(char parola[])
{
    int i, j, l;
    
    for (l = 0; parola[l] != '\0'; l++);
    
    for (i = 0, j = l - 1; i < l / 2 ; i++, j--)
        if (parola[i] != parola[j]) return 0;
    return 1;
}


int main(void)
{
    int i = 0, j;
    char frase[DIM][DIM];
    
    do {
        scanf("%50s", frase[i]);
        i++;
    } while (i < DIM && StringheDiverse(frase[i - 1], "0") != 0);
    
    if (StringheDiverse(frase[i - 1], "0") == 0) i--;
    
    for (j = 0; j < i; j++)
    {
        if (palindroma(frase[j])) printf("\n%s", frase[j]);
    }
    
    printf("\n");

    return 0;
}
