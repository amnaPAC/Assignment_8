#include <stdio.h>

float calculateZakat(float totalWealth, float goldRate) {
    float nisabThreshold = 87.48 * goldRate;
    if (totalWealth >= nisabThreshold) {
        return totalWealth * 0.025;
    } else {
        return 0;
    }
}

int main() {
    float totalWealth, goldRate;
    printf("Enter the total wealth in PKR: ");
    scanf("%f", &totalWealth);
    printf("Enter the current gold rate per gram in PKR: ");
    scanf("%f", &goldRate);
    
    float zakat = calculateZakat(totalWealth, goldRate);
    printf("Zakat Payable = %.2f PKR\n", zakat);
    
    return 0;
}
