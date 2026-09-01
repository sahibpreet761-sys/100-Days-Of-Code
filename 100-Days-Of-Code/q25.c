#include <stdio.h>

int main() {
    char operator;
    float num1, num2;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch (operator) {
        case '+':
            printf("Result = %.2f", num1 + num2);
            break;

        case '-':
            printf("Result = %.2f", num1 - num2);
            break;

        case '*':
            printf("Result = %.2f", num1 * num2);
            break;

        case '/':
            if (num2 != 0)
                printf("Result = %.2f", num1 / num2);
            else
                printf("Error: Division by zero is not allowed.");
            break;

        case '%':
            printf("Remainder = %d", (int)num1 % (int)num2);
            break;

        default:
            printf("Invalid operator.");
    }

    return 0;
}