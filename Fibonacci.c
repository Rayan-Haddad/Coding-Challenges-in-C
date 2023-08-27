#include <stdio.h>

int main(){
    printf("Fibonacci starting ...\n");
    int i;
    int before = 0;
    int after = 1;
    for (i = 0; i < 21; i++)
    {
        int fibonacci = before + after;
        printf("Fibonacci: %d, Number: %d.\n", i, fibonacci);
        before = after;
        after = fibonacci;
    }
    return 0;
}