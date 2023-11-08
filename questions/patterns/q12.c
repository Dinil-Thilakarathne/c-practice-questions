#include <stdio.h>

int main(void)
{

    int i, j, count=1, output;

    for (i=5; i>=1; i--)
    {
    	output=count;
		for(j=1; j<=i; j++)
        {
			printf("%d", output);
			output++;
        }
        puts("");
        output=count;
        count++;
    }
    
    return 0;
}
