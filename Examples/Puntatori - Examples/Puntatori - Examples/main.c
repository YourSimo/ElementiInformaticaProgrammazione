//
//  main.c
//  Puntatori - Examples
//
//  Created by Simone Cavicchioli on 20/11/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//

#include <stdio.h>

//  tipo_restituito nome_funzione(elenco_tipi_argomenti);

void doubleof(int *x);  //   prototipo

int main (void)
{
    int a = 2;  //  Questa istruzione dichiara una variabile intera a e la inizializza con il valore 2.
    doubleof(&a);   //  Chiama la funzione doubleof, passandole l'indirizzo della variabile a.
    printf("%d\n", a);  //
    return 0;
}

void doubleof(int *x)   //  Dentro doubleof viene eseguita l'istruzione *x = (*x) * 2;, che assegna alla variabile puntata da x (a) il valore della stessa variabile puntata da x moltiplicato per 2.
{
    *x = (*x) * 2;
}

// x = &a ; x = &a[0] : a == &a[0] ---> x = indirizzo della variabile di a

// *x = &a ; *x = a[0] : *a == a[0] --> *x = valore di a




/*  void doubleof (int); // prototipo
int main (void)
{
    int a = 2;
    doubleof(a);
    printf("%d\n", a);
    return 0;
}

void doubleof(int x)
{
    x = x * 2;
}
*/