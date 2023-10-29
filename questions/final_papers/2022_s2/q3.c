#include <stdio.h>

float calcPayment(int age, float size)
{
    // declare variables 
    float urea_amount, tsp_amount, mop_amount, urea_cost, tsp_cost, mop_cost, payment;

    // asign fertilizer initial values according to the age 
    switch (age)
    {
        case 0:
            urea_amount = 0;
            tsp_amount = size * 35 ;
            mop_amount = 0;

            break;
        case 2:
            urea_amount = size * 30;
            tsp_amount = 0 ;
            mop_amount = 0;

            break;
        case 4:
            urea_amount = size * 65;
            tsp_amount = 0 ;
            mop_amount = size * 25;

            break;
        case 6:
            urea_amount = size * 50;
            tsp_amount = 0 ;
            mop_amount = size * 25;

            break;
        case 7:
            urea_amount = size * 30;
            tsp_amount = 0 ;
            mop_amount = 0;

            break;
        
        default:
            printf("Invalid age!");
            break;
    }

    // calculate fertilizer values cost 
    urea_cost = urea_amount * 68.0;
    tsp_cost = tsp_amount * 60.0;
    mop_cost = mop_amount * 75.0;

    // calculate total payment 
    payment = urea_cost + tsp_cost + mop_cost;

    return payment;
}

float calcSubsidy(float payment)
{
    // declare variable
    float subsidy_amount;

    // calculate subsidy amount 
    subsidy_amount = payment * 0.15;

    return subsidy_amount;
}

void displayDetails(float payment, float subsidy)
{
    // declare variable
    float payable_amount;

    // calculate payable amount 
    payable_amount = payment - subsidy;

    // display outputs 
    printf("Payble amount\tSubsidy amount\n");
    printf("%.2f\t%.2f", payable_amount, subsidy);        
    
    puts(""); // break line 
}

int main(void)
{
    // declare variable
    int age, i;
    float size, payment, subsidy_amount;

    for (i = 0; i < 3; i++)
    {
        puts(""); // break line 

        // get user input for the age group of the paddy crops 
        printf("The age of the paddy crops in week : ");
        scanf("%d", &age);

        // get user input for the paddy field size in Hectare 
        printf("The paddy field size in HEctare : ");
        scanf("%f", &size);

        puts(""); // break line 

        // calculate payment value using calcPayment function 
        payment = calcPayment(age, size);

        // calculate subsidy amount value using calcSubsidy function 
        subsidy_amount =  calcSubsidy(payment);

        // display outputs using displayDetails function 
        displayDetails(payment, subsidy_amount);

    }

    return 0;
}