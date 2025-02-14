#include <stdio.h>

float calculateIncomeTax(float salary) {
    float annualSalary = salary * 12;
    float tax = 0;
    
    if (annualSalary <= 600000) {
        tax = 0;
    } else if (annualSalary <= 1200000) {
        tax = (annualSalary - 600000) * 0.025;
    } else if (annualSalary <= 2400000) {
        tax = (600000 * 0.025) + (annualSalary - 1200000) * 0.125;
    } else if (annualSalary <= 3600000) {
        tax = (600000 * 0.025) + (1200000 * 0.125) + (annualSalary - 2400000) * 0.20;
    } else {
        tax = (600000 * 0.025) + (1200000 * 0.125) + (1200000 * 0.20) + (annualSalary - 3600000) * 0.30;
    }
    
    return tax;
}

int main() {
    float salary;
    printf("Enter your monthly salary in PKR: ");
    scanf("%f", &salary);
    
    float annualTax = calculateIncomeTax(salary);
    printf("Annual Tax = %.2f PKR\n", annualTax);
    
    return 0;
}
