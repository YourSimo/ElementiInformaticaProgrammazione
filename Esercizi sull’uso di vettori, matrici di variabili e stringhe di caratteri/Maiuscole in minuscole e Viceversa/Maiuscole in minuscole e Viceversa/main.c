//
//  main.c
//  Maiuscole in minuscole e Viceversa
//
//  Created by Simone Cavicchioli on 20/11/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Acquisire da tastiera una frase e successivamente visualizzare la frase ottenuta trasformando il primo carattere, il terzo carattere, il quinto carattere, ecc. da lettera maiuscola in lettera minuscola e il secondo carattere, il quarto carattere, il sesto carattere, ecc. da lettera minuscola in lettera maiuscola. Ad esempio, la frase “LA vita E’ Bella” deve essere visualizzata come “lA ViTa e’ BeLlA”.

#include <stdio.h>

#define DIM 50

int main() {
    
    char frase[DIM];
    int i;
    
    gets(frase);
    
    for (i = 0; i < DIM && frase[i] != '\0'; i++) {
        if ((i + 1) % 2 == 0 && frase[i] >= 'a' && frase[i] <= 'z') printf("%c", frase[i] + 'A' - 'a');
            
       else if ((i + 1) % 2 != 0 && frase[i] >= 'A' && frase[i] <= 'Z') printf("%c", frase[i] + 'a' - 'A');
        
       else printf("%c", frase[i]);
    }
    printf("\n");
    
    return 0;
}
