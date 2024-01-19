#include <stdio.h>

int main(){
    int no;
    printf("Enter the number: ");
    scanf("%d", &no);

    int ans = ((no&1) && (no > 100) &&(no < 200)) ? 1 : 0;
    if (ans){
        printf("True\n");
    } else {
        printf("False\n");
    }
}