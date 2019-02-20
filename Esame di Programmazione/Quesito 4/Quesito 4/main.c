//
//  main.c
//  Quesito 4
//
//  Created by Simone Cavicchioli on 15/02/16.
//  Copyright © 2016 Simone Cavicchioli. All rights reserved.
//
//  Scrivere un programma C che acquisisca da tastiera 10 date del calendario e successivamente visualizzi il numero di date acquisite che precedono l’ultima data acquisita. Per svolgere questo compito si dichiari una nuova tipologia di dati adatta ai fini dell’esercizio e si definisca ed utilizzi due funzioni C con le seguenti finalità:
//  • Produrre 1 se una data data del calendario precede una seconda data data del calendario.
//  • Produrre la quantità di date del calendario in una data sequenza di n date del calendario che precedono una data data del calendario.

//  12/02/2004 ...
//  N° di date che precedono l'ultima

#include <stdio.h>
#include <stdlib.h>

#define DIM 3

typedef struct{
    int a, m, g;
} Data;

int predece(Data data1, Data data2) {
    if (data1.a < data2.a) return 1;
    else if (data1.a == data2.a) {
        if (data1.m < data2.m) return 1;
        else if (data1.m == data2.m) {
            if (data1.g < data2.g) return 1;
        }
    }
    return 0;
}

int quantità(Data date[], int n, Data ultimaData) {
    int i, qta = 0;
    for(i = 0; i < n - 1; i++) if(predece(date[i], ultimaData) == 1) qta++;
    
    return qta;
}

int main(void) {
    Data calendario[DIM];
    int i;
    
    printf("--> (gg/mm/aaaa)\n");
    
    for (i = 0; i < DIM; i++) {
        scanf("%d/%d/%d", &calendario[i].g, &calendario[i].m, &calendario[i].a);
    }
    
    printf("%d precedono l'ultima data\n", quantità(calendario, DIM, calendario[9]));
    
    system("pause");
    return 0;
}
