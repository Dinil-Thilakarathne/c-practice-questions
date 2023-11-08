#include <stdio.h>

int main(void)
{

    int i, j, count=1, output=97;

    for (i=5; i>=1; i--)
    {
		for(j=1; j<=i; j++)
        {
			printf("%c", output);
        }
        puts("");
        output++;
    }
    
    return 0;
}
