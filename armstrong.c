// prgram to check a number if armstrong number using do while
#include <stdio.h>
int main() {
    int num, original, remainder, result = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    original= num;
    do {
        remainder = original % 10;
        result += remainder * remainder * remainder;
        original /= 10;
    } while (original != 0);
    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
    return 0;
}
