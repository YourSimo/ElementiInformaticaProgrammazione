//
//  main.c
//  Numero Cifre
//
//  Created by Simone Cavicchioli on 22/12/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Visualizzare la quantita' di cifre di 10 interi pseudo-casuali compresi tra 1 e 200. Per svolgere questo compito si definisca ed utilizzi una funzione che produce la quantita' di cifre di un dato intero.

//  23

#include <stdio.h>

int cifre(int x)
{
    int count = 0;
    
    do {
        x = x / 10;
        count++;
    } while (x > 0);
    
    return count;
}

int main(void)
{
    int i, x;
    
    for (i = 0; i < 10; i++) {
        x = rand() % 200 + 1;
        printf("%d : (%d)\n", x, cifre(x));
    }
    return 0;
}
