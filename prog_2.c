#include <stdio.h>

float calculateFuelCost(float distance, float fuelAverage, float fuelPrice) {
    return (distance / fuelAverage) * fuelPrice;
}

int main() {
    float distance, fuelAverage, fuelPrice, totalCost;
    
    printf("Enter total trip distance (in km): ");
    scanf("%f", &distance);
    
    printf("Enter vehicle's fuel consumption (km per liter): ");
    scanf("%f", &fuelAverage);
    
    printf("Enter current per liter fuel price (PKR): ");
    scanf("%f", &fuelPrice);
    
    totalCost = calculateFuelCost(distance, fuelAverage, fuelPrice);
    
    printf("Total Fuel Cost = %.2f PKR\n", totalCost);
    
    return 0;
}
