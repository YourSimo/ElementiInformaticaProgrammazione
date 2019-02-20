//
//  main.c
//  Quantità di Cifre 1-200
//
//  Created by Simone Cavicchioli on 13/11/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  visualizzare la quantità di cifre di 10 interi pseudo-casuali compresi tra 1 e 200. Per svolgere questo compito di definisca ed utilizzi una funzione che produce la quantità di cifre di un dato intero.

#include <stdio.h>

int cifre(int x)
{
    int conta = 0;
    
    do {
        x = x / 10;
        conta++;
    } while (x != 0);
    
    return conta;
}

int main()
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        int tmp;
        tmp = rand() % 200 + 1;
        printf("%3d (%d)\n", tmp, cifre(tmp));
    }
    return 0;
}
