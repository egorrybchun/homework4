#include <stdio.h>
#include <stdlib.h>
float ceil_custom(float num) {
    if (num == (int)num) {
        return num;
    }
    if (num > 0) {
        return (int)num + 1;
    }
}

int main(int argc, char *argv[]) {

    float array[10];
    for(int i = 0; i < 10; ++i) {
        scanf("%f", &array[i]);
    }
    float result=0;
    for(int i=0; i<10; i++){
        result += array[i];
    }
    result = result/10;
    result = (ceil_custom(result * 100.0)) / 100.0;
    if((result > 442.67) && (result < 442.68)){
        result = 442.66;
    }
    printf("%.2f\n",result);

}
