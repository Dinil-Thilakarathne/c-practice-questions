// Given a five digit integer, print the sum of its digits.
#include <stdio.h>

int main() {
	
    //	variables decralation
    int n, sum;

    // get user inout 
    printf("Enter your number : ");
    scanf("%d", &n);

    // calculate sum 
    while (n >0) {
        sum += n %10;
        n /= 10;
    }

    // display output
    printf("%d", sum);

    return 0;
}