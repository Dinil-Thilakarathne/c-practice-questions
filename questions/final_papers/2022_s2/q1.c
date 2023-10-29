#include <stdio.h>

int main(void)
{
    // declare variables 
    char package_type , additional_service, additional_service_type;
    int no_of_participants ;
    float tot_amount, discount;

    // get user input for the package type 
    printf("Package Type: ");
    scanf(" %c", &package_type);

    // get user input for the number of participants 
    printf("No of Participants: ");
    scanf("%d", &no_of_participants);

    // calculate total amount according to the package type 
    switch (package_type)
    {
        case 'G':
            tot_amount = no_of_participants * 20000.00;
            break;
        case 'S':
            tot_amount = no_of_participants * 15000.00;
            break;
        case 'B':
            tot_amount = no_of_participants * 10000.00;
            break;
        default:
            break;
    }

    // calculate discount if the number of participants more than 10   
    if (no_of_participants > 10)
    {
        discount = tot_amount * 0.1;
        tot_amount-= discount;
    }
    
    // get user input for the additional service
    printf("Do you want an additioiial Services: ");
    scanf(" %c", &additional_service);

    // check if the user want additional services 
    while (additional_service == 'Y')
    {
        // get user input for additional service type
        printf("Enter the service you like to book: ");
        scanf(" %c", &additional_service_type);

        // add additional cost according to the additional service type
        switch (additional_service_type)
        {
            case 'C':
                tot_amount += 5000.00;
                break;
            case 'V':
                tot_amount += 7500.00;
                break;
            case 'E':
                tot_amount += 10000.00;
                break;
            
            default:
                break;
        }
        printf("Do you want an additioiial Services: ");
        scanf(" %c", &additional_service);
    }

    puts(""); // break line

    // display total amount 
    printf("Total amount to be paid: Rs %.2f", tot_amount);
    
    return 0;
}
