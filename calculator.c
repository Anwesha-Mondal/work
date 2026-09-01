// write a program to build a simple calculator from scratch using c programming
#include <stdio.h>

int main(){
    char operator;
    double num1, num2, result;

    // 1. Get the math operator from the user
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Note the space before %c to clear previous inputs

    // 2. Get the two numbers from the user
    printf("Enter two numbers separated by a space: ");
    scanf("%lf %lf", &num1, &num2);

    // 3. Perform the calculation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
            
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
            
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
            
        case '/':
            // Prevent division by zero
            if (num2 != 0.0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
            
        default:
            printf("Error: Invalid operator chosen.\n");
    }

    return 0;
}

