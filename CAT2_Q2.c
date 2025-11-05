/*
Name STEPHEN M KAMAMA 
Reg no CT100/G/26235/25
COURSE BSC IT 
DESCRIPTION C PROGRAM TO ENTER HOURS WORKED AND HOURLY WAGE IN A WEEK
*/

#include <stdio.h>

int main() {
    float hours, rate, grossPay, taxes, netPay;
    
    // Request input from user
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);
    printf("Enter hourly wage: ");
    scanf("%f", &rate);
    
    // Calculate gross pay
    if (hours <= 40)
        grossPay = hours * rate;
    else
        grossPay = (40 * rate) + ((hours - 40) * rate * 1.5);
    
    // Calculate taxes
    if (grossPay <= 600)
        taxes = grossPay * 0.15;
    else
        taxes = (600 * 0.15) + ((grossPay - 600) * 0.20);
    
    // Calculate net pay
    netPay = grossPay - taxes;
    
    // Display results
    printf("\nGross pay: $%.2f", grossPay);
    printf("\nTaxes: $%.2f", taxes);
    printf("\nNet pay: $%.2f\n", netPay);
    
    return 0;
}