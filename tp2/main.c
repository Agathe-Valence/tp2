//
//  main.c
//  tp2
//
//  Created by Travail on 21/10/2020.
//  Copyright © 2020 Travail. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int a, b;
    a = 0;
    b = 0;
    
    printf("Saisir a : ");
    scanf("%d",&a);
    printf("Saisir b : ");
    scanf("%d",&b);
    
    printf("La somme de a + b = %d", a+b);
    printf("\n");
    return 0;
}
