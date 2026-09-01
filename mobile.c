// to simulate a mobile recharge in c (simple)
#include <stdio.h>
int main(){
    float amount;
    printf("enter the amount to be recharged(the minimum is 100):");
    scanf("%f", &amount);
    printf("amount recharged: %.2f", amount);
    switch(amount){
        case 100:
            printf("You have recharged for 7 days & 5 GB data");
            break;
        case 300:
            printf("You have recharged for 28 days & 12 GB data");
            break;
        case 400:
            printf("You have recharged for 48 days & 20 GB data");
            break;
        case 500:
            printf("You have recharged for 56 days & 25 GB data");
            break;
        default:
            printf("Invalid recharge amount");
    }
    return 0;
}
