//
//  main.c
//  Mano di Carte
//
//  Created by Simone Cavicchioli on 11/12/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Riempire una sequenza (mazzo)

#include <stdio.h>
#define DIM 52

typedef struct
{
    enum {CUORI, QUADRI, FIORI, PICCHE} seme;  //  CUORI = 0, QUADRI = 1, FIORI = 2, PICCHE = 3;
    enum {ASSO = 1, DUE, TRE, QUATTRO, CINQUE, SEI, SETTE, OTTO, NOVE, DIECI, JACK, REGINA, RE} valore;
} Carta;

void visualizzaCarta(Carta c)
{
    switch (c.valore)
    {
        case ASSO: printf("ASSO di ");
            break;
            
        case JACK: printf("JACK di ");
            break;
        
        case REGINA: printf("REGINA di ");
            break;
        case RE: printf("RE di ");
            break;
            
        default:
            break;
    }
    
    switch (c.seme) {
        case CUORI: printf("");
            break;
        
        case QUADRI: printf("");
            break;
        
        case FIORI: printf("");
            break;
        
        case PICCHE: printf("");
            
        default:
            break;
    }
}

void visualizzaMano(Carta v[], int n)
{
    int i;
    for (i = 0; i < n; i++) {
        visualizzaCarta(v[i]);
    }
}

void ordina(Carta v[], int n)
{
    int i, j;
    
    for (i = 0; i < n - 1; i++)
    {
        for (j = n - 1; j > i; j--)
        {
            if (v[j].valore < v[j - 1].valore)
            {
                Carta tmp;
                tmp = v[j];
                v[j] = v[j - 1];
                v[j - 1] = tmp;
            }
        }
    }
}


int estrai(Carta v[], int n, Carta *c)
{
    int tmp = rand() % n;
    *c = v[tmp];
    v[tmp] = v[n - 1];
    return n - 1;
}

int tris(Carta v[], int n)
{
    int i, j, count;
    
    for (i = 1; i <= 13; i++)
    {
        count = 0;
        
        for (j = 0; j < n; j++)
        {
            if (v[j].valore == i) count++;
        }
        
        if (count >= 3) return 1;
    }
    return 0;
}


int main(void)
{
    Carta mazzo[DIM], mano[DIM];
    int i, j, n_mazzo = 0, n;
    
    for (i = 0; i < 4; i++)
    {
        for (j = 1; j <= 13; j++)
        {
            mazzo[n_mazzo].valore = j;
            mazzo[n_mazzo].seme = i;
            n_mazzo++;
        }
    }
    
    printf("Mano di carte iniziale:\n");
    
    for (n = 0; n < 13; i++)
    {
        n_mazzo = estrai(mazzo, n_mazzo, &mano[n]);
    }
    
    ordina(mano, n);
    visualizzaMano(mano, n);
    
    printf("Carta estratta:\n");
    
    while (tris(mano, n) == 0)
    {
        n_mazzo = estrai(mazzo, n_mazzo, &mano[n]);
        visualizzaCarta(mano[n]);
        n++;
    }
    
    return 0;
}
