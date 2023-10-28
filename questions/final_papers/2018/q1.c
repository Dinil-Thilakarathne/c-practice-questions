#include <stdio.h>

int main(void)
{
    // declare variables 
    int tot_students= 4, h_stu_count, m_stu_count=0, f_stu_count, reg_stu_count ;
    float tot_fee, h_stu_fee, m_stu_fee, f_stu_fee ; 
    char course_type ;

//	Continue looping until the number of registered students reaches the limit
    while(reg_stu_count < tot_students){
//    	get user input for the course type 
        printf("Enter your course type: ");
        scanf(" %c", &course_type);

//		check user input and calculate student count for each course
        if (course_type == 'H' || course_type == 'h'){
            h_stu_count++;
        }
        else if((course_type == 'M') || (course_type == 'm')){
        	m_stu_count++;
		}
		else if((course_type == 'F') || (course_type == 'f')){
			f_stu_count++;
		}
        else{
//        	display error message when the user input invalid course type
        	printf("Please enter valid course type!\n");
		}

//		calculate total student count
        reg_stu_count = h_stu_count +  m_stu_count + f_stu_count ;
        
    };

    // calculate registrations fee earned from each course 
    h_stu_fee = (float) h_stu_count * 1500.00; 
    m_stu_fee = (float) m_stu_count * 2000.00; 
    f_stu_fee = (float) f_stu_count * 2500.00; 
    
    puts(""); // break line 
    
    // display outputs  
    printf("Type\tNo.of Students\tTotal reg. Fee\n");
    printf("H\t%d\t\t%.2f\n", h_stu_count, h_stu_fee);
    printf("M\t%d\t\t%.2f\n", m_stu_count , m_stu_fee);
    printf("F\t%d\t\t%.2f\n", f_stu_count, f_stu_fee);
    
    return 0;
}
