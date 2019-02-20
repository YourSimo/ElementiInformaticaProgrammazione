//
//  main.c
//  Sotto-sequenze
//
//  Created by Simone Cavicchioli on 04/12/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//

#include <stdio.h>

#define DIM 5

typedef struct{
    int i1, i2;
} Int2;

void visualizza(Int2 v[], int n)
{
    int i;
    
    for (i = 0; i < n; i++) printf("(%d,%d)", v[i].i1, v[i].i2);
}


void separa(const Int2 v[], int n, Int2 vp[], int *np, Int2 vd[], int *nd)
{
    int i;
    
    for (i = 0; i < n; i++) {
        if (v[i].i2 + v[i].i2 % 2 == 0) {
            vp[*np] = v[i];
            *np = *np + 1;
        }
        else
        {
            vd[*nd] = v[i];
            *nd = *nd + 1;
        }
    }
}


int primo(Int2 x)
{
    int somma = x.i1 + x.i2, i;
    
    for (i = 1; i <= somma; i++) {
        if (somma % i == 0) return 0;
    }
    return 1;
}


Int2 *subSeqPrimi(Int2 v[], int n, int *ns)
{
    int l = 0, max = 0, i, end;
    
    for (i = 0; i < n; i++) {
        if (primo(v[i]) == 1) l++;
        else l = 0;
        if (l > max) {
            end = i;
            max = l;
        }
    }
    *ns = max;
    return &v[end - max + 1];
}


int main(void)
{
    Int2 vet[DIM], vetP[DIM], vetD[DIM], *seq;
    int i, numP, numD, numSeq;
    
    for (i = 0; i < DIM; i++) {
        vet[i].i1 = rand() % 10 + 1;
        vet[i].i2 = rand() % 10 + 1;
    }
    
    visualizza(vet, DIM);
    
    separa(vet, DIM, vetP, &numP, vetD, &numD);   //    vetP == &vetP[0]
    
    printf("Pari: \n");
    visualizza(vetP, numP);
    
    printf("Dispari: \n");
    visualizza(vetD, numD);
    
    printf("Primi: \n");
    seq = subSeqPrimi(vetD, numD, &numSeq); //  indirizzo della sotto squenza
    
    visualizza(seq, numSeq);
    
    return 0;
}
