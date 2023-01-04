#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (void){


    int value = 0;
    for (int i = 0; i<=10; i=i+1){
        for(int j=1; j<=5; j=j+1){
            value = value + 1;}
    }

    printf("%d value\n", value);
    return 0;
}
