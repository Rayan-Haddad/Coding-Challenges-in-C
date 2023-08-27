#include <stdio.h>

int main(){
    int choice;
    float value_in_celsius;
    float value_in_fahrenheit;
    printf("Hello,\nIf you want to transfer from Fahrenheit to Celsius, type 1\nIf you want to transfer from Celsius to Fahrenheit, type 2\n");
    printf("Enter your choice: \n");
    scanf("%d", &choice);
    if (choice == 1){
        printf("Good, now you are going to transfer from Fahrenheit to Celsius!");
        printf("\nEnter the value in Fahrenheit: \n");
        scanf("%f", &value_in_fahrenheit);
        printf("The value in Fahrenheit %.1fF in Celsius is: %.1fC", value_in_fahrenheit, (value_in_fahrenheit - 32) * 0.5556);
    } else if (choice == 2){
        printf("Good, now you are going to transfer from Celsius to Fahrenheit!");
        printf("\nEnter the value in Celsius: \n");
        scanf("%f", &value_in_celsius);
        printf("The value in Celsius %.1fC in Fahrenheit is: %.1fF", value_in_celsius, (value_in_celsius * 1.8) + 32);
    } else
    {
        printf("THERE IS SOMETHING WRONG!!!");
    }
    return 0;
    
}