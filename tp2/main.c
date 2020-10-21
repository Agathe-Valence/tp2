//
//  main.c
//  tp2
//
//  Created by Travail on 21/10/2020.
//  Copyright © 2020 Travail. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int x, y;
    x = 0;
    y = 0;
    
    printf("Saisir x : ");
    scanf("%d",&x);
    printf("Saisir y : ");
    scanf("%d",&y);
    
    printf("La somme de x + y = %d", x+y);
    printf("\n");
    return 0;
}
