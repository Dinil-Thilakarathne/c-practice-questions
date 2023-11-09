#include <stdio.h>

int main(void)
{
    int number;
    FILE *f1Ptr;

    f1Ptr = fopen("example.txt", "r");

    if (f1Ptr == NULL)
    {
        printf("File cannot open!");
        return -1;
    }
    
    fscanf(f1Ptr, "%d", &number);
    while (!(feof(f1Ptr)))
    {
        printf("%d\n", number);
        fscanf(f1Ptr, "%d", &number);
    }
    
    fclose(f1Ptr);

    return 0;
}