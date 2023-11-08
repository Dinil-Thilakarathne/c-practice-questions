#include <stdio.h>


int main(void)
{
    int i, j, output;

    for (i = 1; i <= 5; i++)
    {
        output = i;
        for(j=1; j<=i; j++)
        {
            printf("%d ", output);
            output+=i;
        }
        puts("");
    }
    
    return 0;
}
