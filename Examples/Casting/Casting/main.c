//
//  main.c
//  Casting
//
//  Created by Simone Cavicchioli on 21/10/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//

int main(void) {
    int parte_int;
    float numero_reale = 10.2, parte_fraz;
    
    parte_int = (int)numero_reale;
    parte_fraz = numero_reale - parte_int;
    
    return(0);
}
