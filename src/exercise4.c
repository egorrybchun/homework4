#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    float array[10];
    for(int i = 0; i < 10; ++i) {
        scanf("%f", &array[i]);
    }
    float x = atoi(argv[1]);
    int k = atoi(argv[2]);
    for(int i=0; i<11; i++){
        if(i<k){
            printf("%f ", array[i]);
        }
        if(i==k){
            printf("%f ", x);
        }
        if(i>k){
            printf("%f ", array[i-1]);
        }
    }

    }
