#include <stdio.h>

int main(void)
{

    int i,j, output;

    for (i=1; i <= 5; i++)
    {
    	output = i*2 - 1;
        for(j=1; j<=(i*2 - 1); j++)
        {
            printf("%d", output);
        }
        puts("");
    }
    
    return 0;
}
