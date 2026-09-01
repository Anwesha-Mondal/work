// write a program to check if a number is a palindrome or not
#include <stdio.h>

int main() {
	int num, original, reversed = 0, digit;

	printf("Enter an integer: ");
	if (scanf("%d", &num) != 1) return 0;

	original = num;
	do{
        digit = num % 10;
		reversed = reversed * 10 + digit;
		num /= 10;

    }

	if (reversed == original)
		printf("%d is a palindrome number.\n", original);
	else
		printf("%d is not a palindrome number.\n", original);

	return 0;
}
```
