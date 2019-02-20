//
//  main.c
//  Divisori Intero
//
//  Created by Simone Cavicchioli on 04/11/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//

#include <stdio.h>

int main()
{
    int x, div, i;
    
    do
    {
        printf("--> ");
        
        scanf("%d", &x);
        
        if (x != 0)
        {
            div = 0;
            
            for (i = 1; i <= x; i++) if (x % i == 0) div = div + 1;
            printf("Divisori di %d: %d\n", x, div);
        }
        
        
    } while (x > 0);
    
    return 0;
}
