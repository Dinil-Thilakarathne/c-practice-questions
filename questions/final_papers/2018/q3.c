#include <stdio.h>

int main(void)
{
    // declare variables 
    char bulb_panel[4][4];
    int i,j;

    // get user input for bulb panel 
    for (i = 0; i < 4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("Enter the color of the LED bulbs ('R', 'G', 'B'): ");
            scanf(" %c", &bulb_panel[i][j]);
        }
    }
    
    puts(""); // break line 
    
    // display bulb panel's bulbs using nested for loops
    for (i = 0; i < 4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%c\t", bulb_panel[i][j]);
        }
        puts("");
    }

    puts(""); // break line 

    // display red bulb's positions using nested loops and if condition
    for (i = 0; i < 4; i++)
    {
        for(j=0; j<4; j++)
        {
            if(bulb_panel[i][j] == 'R')
            {
                printf("[%d,%d] ", i , j);
            }
        }
    }
    
    return 0;
}
