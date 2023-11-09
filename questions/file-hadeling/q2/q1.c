#include <stdio.h>

int main(void)
{
    int i, emp_ID, emp_NIC;
    char emp_name[30];

    FILE *f1Ptr;

    f1Ptr = fopen("employee.dat", "w");

    if (f1Ptr == NULL)
    {
        printf("File cannot create! ");
        return -1;
    }
    
    for ( i = 0; i < 2; i++)
    {
        printf("Enter employee ID: ");
        scanf("%d", &emp_ID);

        printf("Enter employee name: ");
        scanf(" %c", emp_name);

        printf("Enter emplyee NIC: ");
        scanf("%d", &emp_NIC);

        fprintf(f1Ptr, "%d %c %d\n", emp_ID, emp_name, emp_NIC);
    }

    fclose(f1Ptr);
    

    return 0;
}