//
//  main.c
//  tp2
//
//  Created by Travail on 21/10/2020.
//  Copyright © 2020 Travail. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    for(int i = 1; i < 100; i++){
        if(i%3 == 0 && i%5 == 0){
            printf("FizzBuzz\n");
        }
        else if(i%3 == 0){
            printf("Fizz\n");
        }
        else if(i%5==0){
            printf("Buzz\n");
        }
        else{
            printf("%d\n", i);
        }
    }
    return 0;
}
