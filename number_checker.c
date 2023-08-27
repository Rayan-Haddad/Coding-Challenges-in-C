#include <stdio.h>

int main(){
    int number;
    printf("Enter the number: \n");
    scanf("%d", &number);
    if (number < 0){
        printf("\033[1;31m");
        printf("The given number is negative!");
    } else if (number > 0)
    {
        printf("\033[1;32m");
        printf("The given number is positive!");
    } else
    {
        printf("\033[1;43m");
        printf("The given number is zero");
    }
    printf("\033[0m");
    
    
    return 0;
}