#include <stdio.h>

int main() {
    char opt;
    int number1, number2;
    float result;

    printf("Choose one of those operators:\n +, /, *, -\n Enter your choice: ");
    scanf(" %c", &opt); 

    printf("Done, The operator is %c\n", opt);
    printf("Now...\nEnter the first number: ");
    scanf("%d", &number1);
    printf("Cool, the first number is %d.\nNow enter the second number: ", number1);

    scanf("%d", &number2);

    switch (opt) {
        case '+':
            result = number1 + number2;
            break;
        case '-':
            result = number1 - number2;
            break;
        case '*':
            result = number1 * number2;
            break;
        case '/':
            if (number2 == 0) {
                printf("ERROR! You can't divide by zero!!!\n");
                return 1; 
            }
            result = (float)number1 / number2; 
            break;
        default:
            printf("Invalid operator chosen!\n");
            return 1;
    }

    printf("Result: %f\n", result);
    return 0;
}
