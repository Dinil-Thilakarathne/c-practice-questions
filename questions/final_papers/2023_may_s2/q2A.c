#include <stdio.h>

int main(void)
{
    int i, fail_count=0;
    float stMarks[8]={0}, high_mark, low_mark, tot_mark=0, avg_mark;

    for ( i = 0; i < 8; i++)
    {
        printf("Enter your marks: ");
        scanf("%f", &stMarks[i]);
    }
    high_mark = stMarks[0];
    low_mark = stMarks[0];

    for ( i = 0; i < 8; i++)
    {
        if (stMarks[i] > high_mark){
            high_mark = stMarks[i];
        }

        if(stMarks[i] < low_mark){
            low_mark = stMarks[i];
        }
        
        tot_mark+=stMarks[i];
    }

    avg_mark = (float) tot_mark / 8.0; 
    
    for ( i = 0; i < 8; i++)
    {
        if(stMarks[i] < avg_mark){
            fail_count++;
        }
    }

    puts("");
    printf("Average mark: %.2f\n", avg_mark);
    printf("Lowest mark: %.2f\n", low_mark);
    printf("Number of students who obtained marks lower than the average mark: %d\n", fail_count);
    printf("The difference between highest and lowest marks of the students. : %.2f\n", high_mark - low_mark);


    
    return 0;
}