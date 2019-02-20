//
//  main.c
//  5 Numeri Complessi
//
//  Created by Simone Cavicchioli on 21/12/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Riempire una sequenza con 5 numeri complessi acquisiti da tastiera, successivamente visualizzare i numeri complessi ottenuti coniugando i numeri acquisiti ed infine visualizzare la somma dei numeri complessi coniugati. Per svolgere questo compito si definisca ed utilizzi 4 funzioni C con le seguenti finalità:
//  -   Coniugare il numero complesso puntato da un dato puntatore a numeri complessi.
//  -   Visualizzare un dato numero complesso.
//  -   Visualizzare una data sequenza di n numeri complessi.
//  -   Produrre un numero complesso ottenuto sommando due dati numeri complessi.

/*
#include <stdio.h>

typedef struct
{
    float r, i;
} Complesso;

void coniugare(Complesso *c);

void visualizza(Complesso c);

void visulizzaSeq(Complesso v[], int n);



int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
 */

#include <stdio.h>
#define DIM 5

typedef struct
{
    float r, i;
} Complesso;

void coniuga (Complesso *n)
{
    n->i = -(n->i);
}

void visualizzaComplesso (Complesso a)
{
    printf("%.2f", a.r);
    if (a.i > 0) printf("+%.2fi\n", a.i);
    else if (a.i < 0)printf("%.2fi\n", a.i);
}

void visualizzaComplessi (Complesso v[], int n)
{
    int i;
    for (i = 0; i < n; i++) visualizzaComplesso(v[i]);
}

Complesso somma(Complesso n1, Complesso n2)
{
    n1.r = n1.r + n2.r;
    n1.i = n1.i + n2.i;
    return n1;
}

int main()
{
    Complesso v[DIM], s = {0.0, 0.0};
    int i;
    
    for (i = 0; i < DIM; i++)
    {
        scanf("%f%fi", &v[i].r, &v[i].i);
        coniuga(&v[i]);
    }
    
    visualizzaComplessi(v, DIM);
    
    for (i = 0; i < DIM; i++) s = somma(s, v[i]);
    
    visualizzaComplesso(s);
    
    return 0;
}