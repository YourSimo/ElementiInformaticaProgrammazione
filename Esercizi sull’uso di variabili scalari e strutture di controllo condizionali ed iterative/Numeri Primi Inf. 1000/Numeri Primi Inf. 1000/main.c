//
//  main.c
//  Numeri Primi Inf. 1000
//
//  Created by Simone Cavicchioli on 09/11/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Visualizzare i numeri primi inferiori a 1000.

#include <stdio.h>

int main() {
    int i, j, p = 0;
    
    for (i = 2; i <= 1000; i++) {
        for (j = 1; j <= i; j++) {
            if (i % j == 0) p++;
            
        }
        if (p == 2) printf("%d ", i);
        p = 0;
    }
    
    return 0;
}
