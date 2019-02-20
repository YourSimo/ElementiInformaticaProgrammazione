//
//  main.c
//  Media di Interi
//
//  Created by Simone Cavicchioli on 06/11/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Acquisire da tastiera una successione di interi che termina con il primo 0 immesso e visualizzare la media degli interi positivi acquisiti.

#include <stdio.h>

int main()
{
    int n, i = 0, s = 0;
    float m;
    
    do
    {
        scanf("%d", &n);
        if (n > 0)
        {
            s = s + n;
            i++;
        }
    } while (n > 0);
    
    m = (float) s / i;
    printf("La media degli interi è: %.2f\n", m);
    
    return 0;
}
