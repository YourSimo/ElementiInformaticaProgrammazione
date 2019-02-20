//
//  main.c
//  Parola Palindroma
//
//  Created by Simone Cavicchioli on 20/11/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Acquisire da tastiera una parola e successivamente visualizzare un messaggio che indichi se la parola è palindroma o meno. (E’ vietato l’utilizzo delle funzionalità disponibili tramite la libreria string.h.)

#include <stdio.h>

#define DIM 50

int main() {
    
    char parola[DIM];
    int i, j;
    
    //gets(parola);
    scanf("%s", parola);
    
    for (i = 0; i < DIM && parola[i] != '\0'; i++);
    
    for (j = 0, i = i - 1; j <=  i && parola [j] == parola[i]; j++, i--);
    
    if (j >= i) printf("La parola [%s] è palindroma\n", parola);
    else printf("La parola [%s] non è palindroma\n", parola);
    
    return 0;
}
