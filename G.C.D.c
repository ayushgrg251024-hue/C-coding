#include <stdio.h>

int main() {
    int a, b, gcd;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for (gcd = (a < b) ? a : b; gcd >= 1; gcd--) {
        if (a % gcd == 0 && b % gcd == 0) {
            break; 
        }
    }
    printf("The GCD of %d and %d is: %d\n", a, b, gcd);

    return 0;
}
