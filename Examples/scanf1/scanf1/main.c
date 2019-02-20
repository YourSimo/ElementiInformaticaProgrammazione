//
//  main.c
//  scanf1
//
//  Created by Simone Cavicchioli on 22/10/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//

#include <stdio.h>

int main(void) {
    
    char c1, c2;
    
    scanf("%c", &c1);
    fflush(stdin);
    scanf("%c", &c2);
    fflush(stdin);
    printf("%c\n", c1);
    
    
    return 0;
    
}
