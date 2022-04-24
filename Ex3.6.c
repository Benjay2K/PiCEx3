#include <stdio.h>

int main(){

    //prime factorization
    long long int n = 600851475143;
    long int div = 2, maxFact;

    while(n != 0) {
        if(n % div != 0)
            div++;
        else {
            maxFact = n;
            n /= div;
            if(n == 1) {
                printf("%d is the largest prime factor.", maxFact);
                break;
            }
        }
    }

    return 0;
}