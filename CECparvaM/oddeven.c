#include <stdio.h>

int main() {
    int num;

    
    printf("Enter an integer: ");
    scanf("%d", &num);
    (num > 0 ) ? printf("%d is even.\n", num) : printf("%d is odd.\n", num);

    return 0;
}
