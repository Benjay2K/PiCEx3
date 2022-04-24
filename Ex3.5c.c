#include <stdio.h>

int main(){

    //while, do .. while, for
    //c) Read a single character from the user and continue until the user enters ’q’ or ’Q’.

    //while
    char ch1;
    printf("Enter character and press q or Q to quit.\n");
    while(ch1 != 'q' || ch1 != 'Q'){
        //scanf("%c", &ch1);
        ch1 = getchar();
        printf("%c\n", ch1);
        if(ch1 == 'q' || ch1 == 'Q')
            break;
    }
/*
    //do .. while
    char ch2;
    do{
        char ch2 = getchar();
        printf("%c\n", ch2);
        if(ch2 == 'q' || ch2 == 'Q')
            break;
    } while(ch2 != 'q' || ch2 != 'Q');

    //for
    char ch3;
    for(ch3 = 0; ch3 < 10; ch3++){
        char ch3 = getchar();
        printf("%c\n", ch3);
        if(ch3 == 'q' || ch3 == 'Q')
            break;
    }
*/
    return 0;
}