#include <stdio.h>
int sumOfdigits(int n) {
    if (n == 0) {
        return 0; 
    } else {
        return (n % 10) + sumOfdigits(n / 10); 
    }
}

int main() {
    int number;
    printf("Enter Your Digits");
    scanf("%d",&number);
    printf("Sum of the digits of %d is %d\n", number, sumOfdigits(number));
    return 0;
}
