#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    // Prompt user for the first number
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    // Ask for the operator
    printf("Select an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // Prompt user for the second number
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Perform the calculation based on the operator
    if (operator == '+') {
        result = num1 + num2;
        printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
    } else if (operator == '-') {
        result = num1 - num2;
        printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
    } else if (operator == '*') {
        result = num1 * num2;
        printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
    } else if (operator == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else {
        printf("Error: Invalid operator.\n");
    }

    return 0;
}