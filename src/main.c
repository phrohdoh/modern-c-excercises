#include <stdio.h>
#include <stdlib.h>

void doit() {
    int price, shares;
    float num, denom, value;

    printf("Enter share price (must include a fraction): ");
    scanf("%d%f/%f", &price, &num, &denom);
    printf("Enter number of shares: ");
    scanf("%d", &shares);

    value = (price + (num/denom)) * shares;

    printf("Value of holdings: $%.2f\n", value);
}

int main() {
    doit();
    return 0;
}