//
//  main.c
//  5 Parole senza vocali
//
//  Created by Simone Cavicchioli on 26/11/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Acquisire da tastiera 5 parole e successivamente visualizzare le parole a cui sono state rimosse le vocali. Per svolgere questo compito definire ed utilizzare due funzioni con le seguenti finalità:
//  -   produrre 1 se una data variabile carattere è una vocale e produrre 0 altrimenti;
//  -   rimuovere da una data variabile stringa le vocali.

//  1° Parola
//  2° Parola
//  ...
//  5° Parola

//  1° Parola senza vocali

#include <stdio.h>

#define TRUE 1
#define FALSE 0

#define DIM_R 1
#define DIM_C 20

int vocale(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return TRUE;
    else return FALSE;
}

void rimuovi_vocali(char str[])
{
    int i = 0, j;
    
    while (str[i] != '\0')
    {
        if (vocale(str[i]) == TRUE)
        {
            for (j = i; str[j] != '\0'; j++)
            {
                str[j] = str[j + 1];
            }
        }
        else i++;
    }
}

int main(void)
{
    int i;
    char parole[DIM_R][DIM_C];
    
    for (i = 0; i < DIM_R; i++)
    {
        scanf("%s", parole[i]);
    }
    
    for (i = 0; i < DIM_R; i++)
    {
        rimuovi_vocali(parole[i]);  //  parole [i] == &parole[i][0]
        printf("%s\n", parole[i]);
    }
    return 0;
}
