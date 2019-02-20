//
//  main.c
//  Casting1
//
//  Created by Simone Cavicchioli on 21/10/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//

int main(void) {
    int dividendo = 100, divisore = 8, resto,
    quoz_intero;    //  Tutti numeri interi
    float quoz_reale;   //  Numero Reale
    
    quoz_intero = dividendo / divisore;
    resto = dividendo % divisore;
    quoz_reale = (float)dividendo/(float)divisore;
    
    return(0);
}
