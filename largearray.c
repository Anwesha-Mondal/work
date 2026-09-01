// write a program to find the largest element in an array
#include <stdio.h>
int main() {
    int arr[100], n, i, largest;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    for (i = 0; i<n; i ++){
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    for (i = 0; i<n; i ++){
        if (arr[i] == largest) {
            printf("The largest element is %d at index %d\n", largest, i);
        }
    }
    return 0;
    }
