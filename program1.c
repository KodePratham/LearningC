#include <stdio.h>

int main() {
    double num1, num2;
    char operator;

    // Taking input from the user
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Performing mathematical operations
    printf("Addition: %.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
    printf("Subtraction: %.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
    printf("Multiplication: %.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
    if (num2 != 0) {
        printf("Division: %.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}