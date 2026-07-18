#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    printf("===================================================\n");
    printf("                SIMPLE CALCULATOR                   \n");
    printf("===================================================\n");

    printf("Enter first number: ");
    if (scanf("%lf", &num1) != 1) {
        printf("Error: Invalid input.\n");
        return 1;
    }

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    if (scanf("%lf", &num2) != 1) {
        printf("Error: Invalid input.\n");
        return 1;
    }

    printf("---------------------------------------------------\n");

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '/':
            if (num2 == 0.0) {
                printf("Error: Division by zero is not allowed!\n");
            } else {
                result = num1 / num2;
                printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
            }
            break;

        default:
            printf("Error: Invalid operator entered! Please use +, -, *, or /.\n");
    }

    printf("===================================================\n");

    printf("\nPress Enter to exit...");
    fflush(stdin); 
    getchar();

    return 0;
}
