//
//  main.c
//  Coppia di Interi
//
//  Created by Simone Cavicchioli on 09/11/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Acquire da tastiera due coppie di interi. Ciascuna coppia indica il numeratore ed il denominatore di una frazione. Visualizzare la somma delle frazioni acquisite ridotta ai minimi termini.

#include <stdio.h>

int main() {
    int n1, n2, d1, d2, i, mcm, ns, x = 0, max;
    printf("Inserire la 1° frazione (A/B): ");
    scanf("%d/%d", &n1, &d1);
    printf("Inserire la 2° frazione (C/D): ");
    scanf("%d/%d", &n2, &d2);
    
    mcm = d1 * d2;
    n1 = mcm / d1 * n1;
    n2 = mcm / d2 * n2;
    
    ns = n1 + n2;
    
    if (ns > mcm) max = ns;
    else max = mcm;
    
    do {
        for (i = 2; i <= max; i++) {
            if (ns % i == 0 && mcm % i == 0) {
                ns = ns / i;
                mcm = mcm / i;
                x = 0;
            } else x = 1;
        }
    } while (x == 0);
    
    printf("La somma ridotta a minini termini è: [%d/%d]\n", ns, mcm);
    
    return 0;
}
