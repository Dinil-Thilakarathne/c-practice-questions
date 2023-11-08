#include <stdbool.h>

int main(void)
{
    int i,j, output, add_num;

    for (i = 1; i <= 4; i++)
    {
        output = i;
        add_num = 3;
        for(j=1; j<=i; j++)
        {
            printf("%d", output);
            output += add_num;
            add_num--;
        }
        puts("");
    }
    
    return 0;
}
