#include <stdio.h>

float calculateFuelCost(float distance, float fuelAverage, float fuelPrice) {
    return (distance / fuelAverage) * fuelPrice;
}

float remainingBalance(float amount) {
    float fed = amount * 0.195;
    float serviceCharges = amount * 0.10;
    return amount - (fed + serviceCharges);
}

float convertCurrency(float amount, char currencyType, float exchangeRate) {
    return amount * exchangeRate;
}

int main() {
    float distance, fuelAverage, fuelPrice, totalCost;
    float amount, availableBalance;
    float currencyAmount, exchangeRate, convertedAmount;
    char currencyType;
    
    printf("Enter total trip distance (in km): ");
    scanf("%f", &distance);
    
    printf("Enter vehicle's fuel consumption (km per liter): ");
    scanf("%f", &fuelAverage);
    
    printf("Enter current per liter fuel price (PKR): ");
    scanf("%f", &fuelPrice);
    
    totalCost = calculateFuelCost(distance, fuelAverage, fuelPrice);
    printf("Total Fuel Cost = %.2f PKR\n", totalCost);
    
    printf("Enter recharge amount (PKR): ");
    scanf("%f", &amount);
    
    availableBalance = remainingBalance(amount);
    printf("Available Balance = %.2f PKR\n", availableBalance);
    
    printf("Enter amount to convert: ");
    scanf("%f", &currencyAmount);
    
    printf("Enter exchange rate: ");
    scanf("%f", &exchangeRate);
    
    convertedAmount = convertCurrency(currencyAmount, currencyType, exchangeRate);
    printf("Converted Amount in PKR = %.2f\n", convertedAmount);
    
    return 0;
}
