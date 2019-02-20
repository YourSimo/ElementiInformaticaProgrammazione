//
//  main.c
//  Somma Interi in ogni Colonna
//
//  Created by Simone Cavicchioli on 19/11/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Riempire una tabella di 4 righe e 3 colonne con interi pseudo-casuali compresi tra 1 e 9 (estremi inclusi). Per ciascuna riga della tabella visualizzare la somma degli interi presenti sulla riga e, successivamente, visualizzare la somma degli interi presenti su ciascuna colonna.

#include <stdio.h>

#define DIMR 4
#define DIMC 3

int main()
{
    int i, j, tab[DIMR][DIMC], somma_r = 0, somma_c = 0;
    
    for (i = 0; i < DIMR; i++)
    {
        for (j = 0; j < DIMC; j++)
        {
            //  [x,y] : rand() % (y - x + 1)+ x --> [1,9] : rand() % 9 + 1
            
            tab[i][j] = rand() % 9 + 1;
            printf("%d\t", tab[i][j]);
        }
        
        //  somma_r += tab[i][j];
        
        somma_r = tab[i][0] + tab[i][1] + tab[i][2];
        
        printf("=  %d", somma_r);
        printf("\n");
    }
    printf("-----------\n");
    
    for (j = 0; j < DIMC; j++)
    {
        for (i = 0; i < DIMR; i++)
        {
            //  somma_c = tab[0][j] + tab[1][j] + tab[2][j] + tab[3][j];
            
            somma_c += tab[i][j];
        }
        printf("%d\t", somma_c);
        somma_c = 0;
    }
    printf("\n");
    
    return 0;
}
