#include <stdio.h>

int main() {

    //while, do .. while, for
    //b) Read a number from the user, and write as many ’*’ symbols to the console as given
    //by the user.

    //while
    int a = 0;
    int num1;
    printf("Enter Integer for the amount of *\n");
    scanf("%d", &num1);
    while( a < num1){
        printf("*\n", num1);
        a++;
    }

    //do .. while
    int b = 0;
    int num2;
    printf("Enter Integer for the amount of *\n");
    scanf("%d", &num2);
    do{
        printf("*\n");
        b++;
    } while(b < num2);

    //for
    int num3;
    printf("Enter Integer for the amount of *\n");
    scanf("%d", &num3);
    for(int c = 0; c < num3; c++){
        printf("*\n");
    }
        return 0;
}