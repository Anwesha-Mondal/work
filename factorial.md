//Write a program to perform the factorial number using (do while loop)
#include <stdio.h>
int main() {
    int num, i = 1;
    factorial = 1;
    printf("Enter a positive integer: ");
    scanf ("%d", &num);
    do {
        factorial *= i;
        i++;
    } while (i <= num);
    printf("Factorial of %d = %d\n", num, factorial);
    return 0;
}
