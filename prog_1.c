#include <stdio.h>

float calculateBill(int units) {
    float bill = 0;
    
    if (units <= 100) {
        bill = units * 18;
    } else if (units <= 200) {
        bill = (100 * 18) + (units - 100) * 22;
    } else if (units <= 300) {
        bill = (100 * 18) + (100 * 22) + (units - 200) * 26;
    } else if (units <= 700) {
        bill = (100 * 18) + (100 * 22) + (100 * 26) + (units - 300) * 30;
    } else {
        bill = (100 * 18) + (100 * 22) + (100 * 26) + (400 * 30) + (units - 700) * 35;
    }
    
    return bill;
}

int main() {
    int units;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    
    if (units < 0) {
        printf("Invalid input! Units cannot be negative.\n");
    } else {
        float bill = calculateBill(units);
        printf("Bill = %.2f PKR\n", bill);
    }
    
    return 0;
}
