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

void showLoadSheddingSchedule(char city[]) {
    char *days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    printf("Load Shedding Schedule for %s:\n", city);
    for (int i = 0; i < 7; i++) {
        printf("%s: 6 AM - 8 AM, 6 PM - 8 PM\n", days[i]);
    }
}

float calculateTrainFare(char class[], float distance) {
    float rate;
    if (strcmp(class, "Economy") == 0) {
        rate = 5;
    } else if (strcmp(class, "Business") == 0) {
        rate = 10;
    } else if (strcmp(class, "First") == 0) {
        rate = 15;
    } else {
        printf("Invalid class selection.\n");
        return -1;
    }
    return distance * rate;
}

int main() {
    float distance, fuelAverage, fuelPrice, totalCost;
    float amount, availableBalance;
    float currencyAmount, exchangeRate, convertedAmount;
    char currencyType;
    char city[50];
    char trainClass[20];
    float trainDistance, trainFare;
    
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
    
    printf("Enter your city for load shedding schedule: ");
    scanf("%s", city);
    showLoadSheddingSchedule(city);
    
    printf("Enter train travel distance (in km): ");
    scanf("%f", &trainDistance);
    
    printf("Enter train class (Economy, Business, First): ");
    scanf("%s", trainClass);
    
    trainFare = calculateTrainFare(trainClass, trainDistance);
    if (trainFare != -1) {
        printf("Train Fare = %.2f PKR\n", trainFare);
    }
    
    return 0;
}
