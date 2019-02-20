//
//  main.c
//  Aggrega
//
//  Created by Simone Cavicchioli on 22/12/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Acquisire 5 parole e successivamente inizializzare una variabile stringa con le parole acquisite aggregate in ordine inverso rispetto a quello con cui sono state acquisite. Per svolgere questo compito definire ed utilizzare una funzione che aggiunge ad una data variabile stringa i caratteri di una seconda data variabile stringa.

//      01234
//  0   casa
//  1   pollo
//  2   tre

#include <stdio.h>

#define PAROLE 5
#define LETTERE 20

void aggrega(char str1[], char str2[])
{
    int i, j;
    
    for (i = 0; str1[i] != '\0'; i++);
    for (j = 0; str2[j] != '\0'; j++) str1[i + j] = str2[j];
    str1[i + j] = '\0';
}


int main(void)
{
    int r;
    char tab[PAROLE][LETTERE], risultato[100] = "";
    
    for (r = 0; r < PAROLE; r++) scanf("%s", tab[r]);
    
    for (r = PAROLE - 1; r >= 0; r--) aggrega(risultato, tab[r]);
    
    printf("%s\n", risultato);
    
    return 0;
}
