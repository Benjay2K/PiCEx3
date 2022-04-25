#include <stdio.h>
static int test_palindromic(unsigned int n);
int main(void)
{
    unsigned int i, j, max = 0;
    for (i = 100; i <= 999; i++) {          //cycle through first
        for (j = 100; j <= 999; j++) {      //and second 3 digit numbers
            unsigned int p = i * j;         //and multiply
            if (test_palindromic(p) && p > max) {       //check if p is palindrome and is greater than current max
                max = p;                                   //set max to current p
            }
        }
    }
    printf("%u\n", max);                            //output current max
    return 0;
}
int test_palindromic(unsigned int n)
{
    unsigned int reversed_num = 0, t = n;       //temporary var for number that is checked for palindrome
    while (t) {
        reversed_num = 10 * reversed_num + (t % 10);       //is reversed number the same as before (+remainder)
        t /= 10;
    }
    return reversed_num == n;
}