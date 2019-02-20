//
//  main.c
//  Intero Pari o Dispari
//
//  Created by Simone Cavicchioli on 06/11/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Acquisire da tastiera una successione di interi che termina con il primo 0 immesso e visualizzare dopo aver acquisito ciascun intero un messaggio che indica se l’intero acquisto è pari oppure dispari.


#include <stdio.h>

int main() {
    int x;
    do {
        scanf("%d", &x);
        
        if (x % 2 == 0) printf("L'intero acquisito è pari\n");
        else printf("L'intero acquisito è dispari\n");
        
    } while (x != 0);
    
    return 0;
}
