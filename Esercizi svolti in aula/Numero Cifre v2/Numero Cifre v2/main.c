//
//  main.c
//  Numero Cifre v2
//
//  Created by Simone Cavicchioli on 22/12/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Acquisire una cifra x da tastiera. Successivamente visualizzare la quantita' di cifre di 10 interi pseudo-casuali compresi tra 1 e 200 e quante volte compare la cifra x all'interno di questi interi. Per svolgere questo compito si definisca ed utilizzi una funzione che dato un intero n ed una cifra x inizializzi gli interi puntati da due dati puntatori a variabili intere con la quantità di cifre di n e quante volte compare x in n.

#include <stdio.h>

//  220     20

void qtàCifre(int n, int x, int *qtàN, int *qtàX)
{
    *qtàN = *qtàX = 0;
    
    while (n > 0)
    {
        (*qtàN)++;
        if (n % 10 == x) (*qtàX)++;
        n = n / 10;
    }
}


int main(void)
{
    int i, n, x, numCifreN, compareX;
    
    printf("-----–---> ");
    scanf("%d", &x);
    
    for (i = 0; i < 10; i++)
    {
        n = rand() % 200 + 1;
        qtàCifre(n, x, &numCifreN, &compareX);
        printf("%d\t: (%d)-(%d)\n", n, numCifreN, compareX);
    }
    return 0;
}
