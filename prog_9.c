#include <stdio.h>

float internetPackageCost(int GB, char network[]) {
    float cost = 0;
    
    if (strcmp(network, "Zong") == 0) {
        cost = GB * 100;
    } else if (strcmp(network, "Jazz") == 0) {
        cost = GB * 120;
    } else if (strcmp(network, "Telenor") == 0) {
        cost = GB * 90;
    } else {
        printf("Invalid network provider.\n");
        return -1;
    }
    
    return cost;
}

int main() {
    int GB;
    char network[20];
    
    printf("Enter the number of GB required: ");
    scanf("%d", &GB);
    printf("Enter the network provider (Zong, Jazz, Telenor): ");
    scanf("%s", network);
    
    float cost = internetPackageCost(GB, network);
    if (cost != -1) {
        printf("Cost = %.2f PKR\n", cost);
    }
    
    return 0;
}
