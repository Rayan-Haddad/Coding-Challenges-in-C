#include <stdio.h>

int main(){
    int first_number;
    int second_number;
    printf("Enter the first number:\n");
    scanf("%d", &first_number);
    printf("Enter the second number: \n");
    scanf("%d", &second_number);
    printf("results are: %d", first_number + second_number);
    return 0;
}