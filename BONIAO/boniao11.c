#include <stdio.h>

int main() {
    float price1, price2;
    int quantity1, quantity2;
    float subtotal, discount = 0, total;

    printf("Enter price of product 1: ");
    scanf("%f", &price1);

    printf("Enter quantity of product 1: ");
    scanf("%d", &quantity1);

    printf("Enter price of product 2: ");
    scanf("%f", &price2);

    printf("Enter quantity of product 2: ");
    scanf("%d", &quantity2);

    subtotal = (price1 * quantity1) +
               (price2 * quantity2);

    if (subtotal >= 1000) {
        discount = subtotal * 0.10;
    }

    total = subtotal - discount;

    printf("\nSubtotal: P%.2f\n", subtotal);
    printf("Discount Amount: P%.2f\n", discount);
    printf("Final Amount to Pay: P%.2f\n", total);

    return 0;
}
