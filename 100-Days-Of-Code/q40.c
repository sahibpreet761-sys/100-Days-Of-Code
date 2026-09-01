#include <stdio.h>

int main() {
    long long binary, complement = 0, place = 1;
    int digit;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary != 0) {
        digit = binary % 10;

        if (digit == 0) {
            complement += 1 * place;
        } else {
            complement += 0 * place;
        }

        binary = binary / 10;
        place = place * 10;
    }

    printf("1's complement = %lld", complement);

    return 0;
}