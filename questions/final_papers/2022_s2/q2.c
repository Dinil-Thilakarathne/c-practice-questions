#include <stdio.h>

int main(void)
{
    // declare variables 
    float rainfall[7], avg_rainfall, max_rainfall, min_rainfall, tot_rainfall;
    int i, j, count;

    // get user inputs for rainfall values and asign them to the rainfall array
    for (i = 0; i < 7; i++)
    {
        printf("Input the rainfall of day %d: ", ++i);
        scanf("%f", &rainfall[--i]);
    }

    puts(""); // break line

    // display output using nested for loops 
    for (i = 0; i < 7; i++)
    {
        printf("Day 1 to %d\n", ++i);
        i--;
        max_rainfall = rainfall[0]; // asign max rainfall initail value
        min_rainfall = rainfall[0]; // asign min rainfall initail value
        tot_rainfall = 0; // reset total rainfall value

        // access rainfall array values using inner for loops 
        for (j = 0; j <= i; j++)
        {
            count = i +1; // asign count initial value

            // calculate total rainfall value 
            tot_rainfall+=rainfall[j]; 

            // calculate average rainfall value 
            avg_rainfall = tot_rainfall / (float) count;

            // calculate max rainfall value 
            if(rainfall[j] > max_rainfall){
                max_rainfall = rainfall[j];
            }

            // calculate min rainfall value 
            if (rainfall[j] < min_rainfall)
            {
                min_rainfall = rainfall[j];
            }
            
        }
        
        // display outputs  
        printf("Average rainfall : %.1f mm\n", avg_rainfall);
        printf("Maximum rainfall : %.1f mm\n", max_rainfall);
        printf("Minimum rainfall : %.1f mm\n", min_rainfall);
        
        puts(""); // break line
    }
    
    
    return 0;
}