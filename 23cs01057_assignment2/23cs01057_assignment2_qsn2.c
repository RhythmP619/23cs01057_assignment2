#include <stdio.h>

int main(){
    /* this code uses ternary operators to find the maximum of three numbers*/

    int a = 17, b = -90, c = 12;
    int max1 = (a > b) ? a : b;
    int max = (max1 > c) ? max1 : c;
    printf("%d\n", max);
}