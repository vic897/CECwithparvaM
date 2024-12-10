#include <stdio.h>

int main() {
    int arr[4] = {1, 2, 3, 4}; 
    int sum = 0;

    for (int i = 0; i < 4; i++) {
        sum += arr[i]; 
    }

    printf("Sum of elements in the array is %d\n", sum);
    printf("Elements of the array in reverse order: ");
    for (int i = 3; i >= 0; i--) { 
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
