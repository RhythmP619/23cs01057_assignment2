#include <stdio.h>

int main(){
    int no;
    printf("Enter the number: ");
    scanf("%d", &no);

    if (no & 1){
        printf("%d is an odd number.", no);
    } else {
        printf("%d is an even number.", no);
    }
}