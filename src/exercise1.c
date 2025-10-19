#include <stdio.h>
//test
int main() {

 double array[10];

 for (int i = 0; i < 10; i++) {
  scanf("%lf", &array[i]);
 }

 double average = 0;

 for (int i = 0; i < 10; i++) {
  average += array[i];
 }

 average /= 10;

 printf("%.3f", average);
}
