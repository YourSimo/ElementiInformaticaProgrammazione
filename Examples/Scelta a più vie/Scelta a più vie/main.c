//
//  main.c
//  Scelta a più vie
//
//  Created by Simone Cavicchioli on 22/10/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//

#include <stdio.h>
//#include <stdlib.h>

int main(void) {
    
    char c;
    scanf("%c",&c);
    
    if(c >= '0' && c <= '9') printf("Il carattere è una cifra\n");
        
    else if(c >= 'A' && c <= 'Z') printf("Il carattere è una lettera maiuscola\n");
        
    else if(c>= 'a' && c <= 'z') printf("Il carattere è una lettera minuscola\n");
        
    else printf("Il carattere non è alfabetico\n");
    
    //system("pause");
    
    return(0);
}
