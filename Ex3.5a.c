#include <stdio.h>

int main(){

    //while, do .. while, for
    //a) Write a loop that prints the numbers 0, . . . , 100 to the console.

    //while
    printf("Numbers 0 to 100 with while loop\n");
    int i = 0;
    while(i <= 100){
        printf("%d\n", i);
        i++;
    }
    printf("\n");

    //do .. while
    printf("Numbers 0 to 100 with do .. while loop\n");
    int j = 0;
    do{
        printf("%d\n", j);
        j++;
    } while(j <= 100);
    printf("\n");

    //for
    printf("Numbers 0 to 100 with for loop\n");
    for(int n = 0 ; n <= 100 ; n++){
        printf("%d\n", n);
    }

    return 0;
}
