//
//  main.c
//  5 Parole
//
//  Created by Simone Cavicchioli on 18/11/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//

//  Acquisire 5 parole e successivamente inizializzare una variabile stringa con le parole acquisite aggregate in ordine inverso rispetto a quello con cui sono aquisite. Per svolgere questo compito definire ed utilizzare una funzione che aggiunge ad una data variabile stringa i caratteri di una seconda data variabile stringa


#include <stdio.h>
#define DIMC 20
#define DIMR 5

void aggrega(char str1[], char str2[])
{
    int n, i;
    
    for (n = 0; n < DIMC && str1[n] != '\0'; n++);
    
    for (i = 0; i < DIMC && str2[i] != '\0'; i++) str1[i + n] = str2[i];
    str1[i + n] = '\0';
}

int main(void)
{
    char parole[DIMR][DIMC], ris[DIMR*DIMC]="";
    int i;
    
    for (i = 0; i < DIMR; i++) scanf("%s", parole[i]); //  parole[i] = &parole[i][0]
    for (i = DIMR - 1; i>= 0; i--) aggrega(ris, parole[i]);
    
    printf("%s\n", ris);
    
    return 0;
}
