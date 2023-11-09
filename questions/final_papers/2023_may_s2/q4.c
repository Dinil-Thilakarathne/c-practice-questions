#include <stdio.h>

int main(void)
{
    int cusID, cusIDs[10], cusId_read, i=0;
    char cusName[30], cusNIC[15];

    FILE *ptr;

    ptr = fopen("employee.dat", "a+");

    if(ptr == NULL){
        printf("File cannot open!\n");
        return -1;
    }

    printf("Enter customer ID: ");
    scanf("%d", &cusID);

    printf("Enter customer name: ");
    scanf("%s", cusName);

    printf("Enter customer NIC: ");
    scanf("%s", cusNIC);

    fscanf(ptr, "%d", &cusId_read);

    while (!(feof(ptr)))
    {
        cusIDs[i] = cusId_read;
        fscanf(ptr, "%d", &cusId_read);
    }
    
    

    return 0;
}