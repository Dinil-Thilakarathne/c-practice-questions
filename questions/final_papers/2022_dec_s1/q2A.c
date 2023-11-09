#include <stdio.h>

int main(void)
{
    int numArr[8]={0}, i, n=2, newNumArr[8]={0};

    for (i = 0; i < 8; i++)
    {
        printf("Enter your number: ");
        scanf("%d", &numArr[i]);

    }

    for (i = 0; i < 8; i++)
    {
        printf("%d ", numArr[i]);
    }
    puts("");

    for (i = 0; i < 8; i++)
    {
        if ((i + n) >= 8){
            newNumArr[i+n - 8] = numArr[i];
        }else{
            newNumArr[i+n] = numArr[i];
        }
        
    }
    puts("");
    
    for (i = 0; i < 8; i++)
    {
        printf("%d ", newNumArr[i]);
    }
    
    return 0;
}