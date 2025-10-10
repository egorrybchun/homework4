#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    float array[10];
    for(int i = 0; i < 10; ++i) {
        scanf("%f", &array[i]);
    }
    int k = atoi(argv[1]);
    if(k>=0){
        for(int i=10-k; i<10; i++){
            printf("%f ", array[i]);
        }
        for(int i=0; i<10-k; i++){
            printf("%f ", array[i]);
        }

    }else{
        for(int i=-k; i<10; i++){
            printf("%f ", array[i]);
        }
        for(int i=0; i<-k; i++){
            printf("%f ", array[i]);
        }

    }
}
