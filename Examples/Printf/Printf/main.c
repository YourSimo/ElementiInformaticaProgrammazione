//
//  main.c
//  Printf
//
//  Created by Simone Cavicchioli on 21/10/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//

#include <stdio.h>

int main(void) {
    
    int h1 = 10, h2 = 11;
    float x1;
    
    x1=23.21;
    
    printf("Ore %d: %f gradi\nOre %d: %9.2f gradi\n", h1, x1, h2, x1);
    printf("Ore %d: %9.f gradi\n", h2, x1);
    
    return 0;
}
