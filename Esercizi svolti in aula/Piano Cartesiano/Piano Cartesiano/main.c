//
//  main.c
//  Piano Cartesiano
//
//  Created by Simone Cavicchioli on 27/11/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Riempire una sequenza con 10 punti del piano cartesiano. l'asciassa e l'ordinata di ciascun dei quali è un intero pseudo-casuale compreso tra 0 e 2000 ...


#include <stdio.h>
#include <math.h>

#define DIM 10

typedef struct
{
    int x, y;
} Punto;


float distanza(Punto p1, Punto p2)
{
    return sqrtf(powf(p2.x - p1.x, 2) + powf(p2.y - p1.y, 2));
}


Punto più_vicino(Punto v[], int n, Punto ref)
{
    Punto risulato = v[0];
    int i;
    
    for (i = 0; i < n; i++)
    {
        if (distanza(v[i], ref) < distanza(risulato, ref)) risulato = v[i];
    }
    return risulato;
}


void ordina(Punto v[], int n)
{
    int i, j;
    Punto o = {0,0};
    
    for (i = 0; i < n - 1; i++)
    {
        for (j = n - 1; j > i; j--)
        {
            if (distanza(v[j], o) < distanza(v[j - 1], o))
            {
                Punto tmp;
                
                tmp = v[j];
                v[j] = v[j - 1];
                v[j - 1] = tmp;
            }
        }
    }
}


void visualizzaPunto(Punto p)
{
    printf("(%d,%d)\n", p.x, p.y);
}


void visualizzaPunti(Punto v[], int n)
{
    int i;
    
    for (i = 0; i < n; i++) visualizzaPunto(v[i]);
}


int main(void)
{
    Punto vet[DIM], myP;
    int i;
    
    for (i = 0; i < DIM; i++)
    {
        vet[i].x = rand() % 2001 - 1000;
        vet[i].y = rand() % 2001 - 1000;
    }
    
    ordina(vet, DIM);
    visualizzaPunti(vet, DIM);
    
    printf("(x,y) = ");
    scanf("(%d,%d)", &myP.x, &myP.y);
    
    visualizzaPunto(più_vicino(vet, DIM, myP));
    return 0;
}
