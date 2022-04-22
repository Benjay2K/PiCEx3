#include <stdio.h>
#define N 1000

int main() {

    int num[N], i, j;

    //fill array with numbers 1 to (N)1000
    for(i = 0; i < N; i++)
        num[i] = i + 1;

    //set all multiples to zero
    for(i = 1; (num[i] * num[i]) <= N; i++)
    {
        //Proceed to the next non-zero element
        if(num[i] != 0)
        {
            //set all its multiples to zero
            for(j = num[i] * num[i]; j <= N; j += num[i])
            {
                num[j - 1] = 0;
            }
        }

    }

    printf("Sieve of Eratosthenes Method\n");
    printf("To find Prime numbers from 1 to %d\n\n", N);
    //all the non-zero entries left in the array would be prime numbers ...
    for(i = 1; i < N; i++)
    {
        if(num[i] != 0)
            //so print out these numbers
            printf("%d\t", num[i]);
    }

    printf("\n");
    return 0;
}