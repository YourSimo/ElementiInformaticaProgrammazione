//
//  main.c
//  Data Calendario
//
//  Created by Simone Cavicchioli on 06/11/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Acquisire da tastiera una successione di triple di interi che termina con la prima tripla 0/0/0 immessa. Ciascuna tripla acquisita (eccetto l’ultima) rappresenta una data del calendario. Visualizzare la data più remota tra quelle acquisite.

#include <stdio.h>

int main() {
    int day, month, year;
    int day1, month1, year1;
    
    printf("Inserire una data (dd/mm/yy):\n");
    printf("--> ");
    scanf("%d/%d/%d", &day1, &month1, &year1);
    
    do {
        printf("--> ");
        scanf("%d/%d/%d", &day, &month, &year);
        
        if (day > 0 && month > 0 && year > 0) {
            
            if (year < year1) {
                
                day1 = day;
                month1 = month;
                year1 = year;
                
            } else if (year == year1 && month < month1) {
                
                day1 = day;
                month1 = month;
                
            } else if (year == year1 && month == month1 && day < day1) {
                
                day1 = day;
                
            }
                
                
        }
            
    } while (day > 0 && month > 0 && year > 0);
    
    printf("La data più remota registrata è: %d/%d/%d\n", day1, month1, year1);

    return 0;
}
