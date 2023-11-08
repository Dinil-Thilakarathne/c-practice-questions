#include <stdio.h>

int main(void)
{

    // declare variables 
    float payment, discount, tot_payment;
    char pizza_type, pizz_size, pizza_count, credit_card, loyality_card, online_order;

    printf("Input pizza type : ");
    scanf(" %c", &pizza_type);

    printf("Input pizza size : ");
    scanf(" %c", &pizz_size);

    printf("Input number of pizzas : ");
    scanf("%d", &pizza_count);

    while (pizza_type != -1)
    {
        switch (pizza_type)
        {
        case '1':
            if(pizza_type == 'L'){
                payment= payment + 1720.00;
            }else if(pizza_type == 'M'){
                payment = payment + 975.00;
            }else{
                printf("Please enter valid pizza size (L or M)\n");
            }
            break;
        
        case '2':
            if(pizza_type == 'L'){
                payment= payment + 1820.00;
            }else if(pizza_type == 'M'){
                payment = payment + 1000.00;
            }else{
                printf("Please enter valid pizza size (L or M)\n");
            }
            break;
        
        default:
            printf("Please enter valid pizza type!\n");
            break;
        }
        if (pizza_type)
        {
            /* code */
        }
        

        printf("Input pizza type : ");
        scanf(" %c", &pizza_type);
    }

    printf("Are you paying by creadit card (Y/N) ? ");
    scanf(" %c", &credit_card);

    printf("Are you a loyality customer (Y/N) ? ");
    scanf(" %c", &loyality_card);

    printf("Is this an online oder (Y/N) ? ");
    scanf(" %c", &online_order);

    if (credit_card == 'Y')
    {
        discount = payment * 0.2;
    }
    if (loyality_card == 'Y')
    {
        discount = payment * 0.15;
    }
    if (online_order == 'Y')
    {
        discount = payment * 0.05;
    }

    tot_payment = payment - discount ;

    printf("Total bill amount: %.2f\n", payment);
    printf("Discount: %.2f\n", discount);
    printf("Net amount: %d\n", tot_payment);   

    return 0;
}
