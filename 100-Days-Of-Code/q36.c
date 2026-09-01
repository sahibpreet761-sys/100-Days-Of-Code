#include <stdio.h>

int main() {
    int a, b, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }

    hcf = a;

    printf("HCF (GCD) = %d", hcf);

    return 0;
}