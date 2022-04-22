#include <stdio.h>


int main() {

    int num;
    //scan for integer
    printf("Please enter an integer\n");
    scanf( "%d", &num );

    //check if number is even or odd
    if(num % 2 == 0)
        printf("%d is even.\n", num);
    else
        printf("%d is odd.\n", num);

    //check if number is divisible by 3 or not
    if(num % 3 == 0)
    {
        printf("%d is divisible by 3.\n", num);
    }
    else
    {
        printf("%d is not divisible by 3.\n", num);
    }

    //check if number is positive or negative
    if (num <= 0.0) {
        if (num == 0.0)
            printf("You entered 0.\n");
        else
            printf("%d is a negative number.\n", num);
    }
    else
        printf("%d is a positive number.\n", num);

    //check if number +1 is divisible by 7 or not
    if((num + 1) % 7 == 0)
    {
        printf("%d incremented is divisible by 7.\n", num);
    }
    else
    {
        printf("%d incremented is not divisible by 7.\n", num);
    }
    return 0;
}

