#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    float array[10];
    for(int i = 0; i < 10; ++i) {
        scanf("%f", &array[i]);
    }
    for(int i=9; i>=0; i--){
        printf("%f\n", array[i]);
    }
}
