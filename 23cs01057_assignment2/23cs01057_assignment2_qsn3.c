#include <stdio.h>

int main(){
    int days;
    printf("Enter the number of days: ");
    scanf("%d", &days);
    int years = days / 365;
    days %= 365;
    int months = days / 30;
    days %= 30;
    int weeks = days / 7;
    days %= 7;

    printf("Years: %d\n", years);
    printf("Months: %d\n", months);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", days);
}