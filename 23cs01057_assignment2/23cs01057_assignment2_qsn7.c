#include <stdio.h>
#include <math.h>

int main(){
    int price, tip, tax;
    printf("Enter the meal price: ");
    scanf("%d", &price);
    printf("Enter the tip percent: ");
    scanf("%d", &tip);
    printf("Enter the tax percent: ");
    scanf("%d", &tax);

    int ans = round(price + ((tip*price) / (100*1.0)) + ((tax*price) / (100*1.0)));
    printf("%d\n", ans);
}