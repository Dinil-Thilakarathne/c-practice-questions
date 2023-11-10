#include <stdio.h>

int main(void)
{
    int itemCodeFound = 0;
    char itemCode[10], itemName[20];
    char tempItemCode[10], tempItemName[20];

    FILE *ptr;
    ptr = fopen("items.dat", "r");

    if (ptr == NULL)
    {
        printf("File cannot open! ");
        return -1;
    }

    printf("Enter your item code: ");
    scanf("%s", itemCode);

    while (fscanf(ptr, "%s %s", tempItemCode, tempItemName) == 1)
    {
        if (itemCode == tempItemCode)
        {
            itemName = tempItemName;
            itemCodeFound = 1;
        }
        
    }

    if (itemCodeFound == 1)
    {
        printf("Your item name : %s", itemName);
    }else{
        printf("Item does not exits! ");
    }

    fclose(ptr);
    
    
    
    return 0;
}