/*
Print a pattern of numbers from  to  as shown below. Each of the numbers is separated by a single space.

    4 4 4 4 4 4 4  
    4 3 3 3 3 3 4   
    4 3 2 2 2 3 4   
    4 3 2 1 2 3 4   
    4 3 2 2 2 3 4   
    4 3 3 3 3 3 4   
    4 4 4 4 4 4 4   

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() 
{

    int n, row, col;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int size = 2 * n - 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", n - min(min(i, j), min(size - i - 1, size - j - 1)));
        }
        printf("\n");
    }

    return 0;
}
 