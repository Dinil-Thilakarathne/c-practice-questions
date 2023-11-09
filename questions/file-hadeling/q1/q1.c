#include <stdio.h>

int main(void)
{
    int i, number;
    FILE *f1Ptr;

    f1Ptr = fopen("example.txt", "w");

    if (f1Ptr == NULL)
    {
        printf("Cannot open file!");
        return -1;
    }
    for (i = 0; i < 5; i++)
    {
        printf("Enter your number : ");
        scanf("%d", &number);
        fprintf(f1Ptr, "%d\n", number);
    }
    
    fclose(f1Ptr);
    
    return 0;
}
