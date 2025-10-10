#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {

    float array[10];
    for(int i=0; i<10; i++){
        array[i] = atof(argv[i+1]);
    }
    for(int i=0; i<10; i++){
        printf("%f\n", array[i]);
    }
    float result=0;
    for(int i=0; i<10; i++){
        result += array[i];
    }
    result = result/10;
    result = (ceil(result * 100.0)) / 100.0;
    printf("%.2f\n",result);

}
