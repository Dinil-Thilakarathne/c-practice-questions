#include <stdio.h>

int main(void)
{

    int answArr[4]={0}, count=0, i, j;
    char stuID[30];

    FILE *ptr;

    ptr = fopen("answer.dat", "w");

    for ( i = 0; i < 5; i++)
    {
        printf("Enter your Student Id and marks: ");
        scanf("%s %d %d %d %d", stuID, &answArr[0], &answArr[1],&answArr[2],&answArr[3]);
        puts("");
        fprintf(ptr, "%s %d %d %d %d\n", stuID, &answArr[0], &answArr[1],&answArr[2],&answArr[3]);
    }
    
    fclose(ptr);
    

    ptr = fopen("answers.dat", "r");

    if (ptr == NULL)
    {
        printf("File cannot open!\n");
        return -1;
    }

    for (i = 0; i < 5; i++)
    {
        count=0;
        fscanf(ptr, "%s %d %d %d %d %d", stuID, &answArr[0], &answArr[1], &answArr[2], &answArr[3]);
        if(answArr[0]==1) 
            count++;
        if(answArr[1]==4) 
            count++;
        if(answArr[2]==2) 
            count++;
        if(answArr[3]==3) 
            count++;

        printf("%s %d", stuID, count);
        puts("");
    }
    fclose(ptr);

    return 0;
}