#include <stdio.h>

int main() {
    int array[100] = {20, 10, 5, 2, 1, 100, 55, 66};
    int n = sizeof(array) / sizeof(array[0]);
    
    int max = array[0];
    int min = array[0];
    
    for (int i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
        }
        
        if (array[i] < min) {
            min = array[i];
        }
    }
    
    printf("Largest in the given array is %d\n", max);
    printf("Smallest in the given array is %d\n", min);
    
    return 0;
}
