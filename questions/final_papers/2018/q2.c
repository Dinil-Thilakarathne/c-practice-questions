#include <stdio.h>

struct customer
{
    int cus_acc_no;
    char cus_name[50];
    char transaction_type;
    float transaction_amount;
    
};

int main(void)
{
	struct customer customers[5]; // create 5 customer struct

    // declare variables 
	int i , j ; 
    float tot_deposit, tot_withdrawal, max_deposit , min_withdrawal;

    // get user input for customer details 
	for(i=0; i<5; i++){
		printf("Enter customer account number :");
	    scanf("%d", &customers[i].cus_acc_no);
		
		printf("Enter customer name: ");
		scanf("%s", &customers[i].cus_name);
		
		printf("Enter customer transaction type: ");
		scanf(" %c", &customers[i].transaction_type);
		
		printf("Enter customer transaction amount: ");
		scanf("%f", &customers[i].transaction_amount);

        puts(""); // break line
	}

    min_withdrawal = 999999;

    // go through each customer's details usign for loop 
    for(i=0; i<5; i++){

        // calculate total withdrawal amount and mininum withdrawal amount  
        if(customers[i].transaction_type == 'w'){
            tot_withdrawal+= customers[i].transaction_amount;

            if (customers[i].transaction_amount < min_withdrawal)
            {
                min_withdrawal = customers[i].transaction_amount;
            }
            
        }

        // calculate total deposit amount and maximum deposit amount 
        if(customers[i].transaction_type == 'd'){
            tot_deposit+= customers[i].transaction_amount;

            if (customers[i].transaction_amount > max_deposit)
            {
                max_deposit = customers[i].transaction_amount;
            }
            
        }
    }

    // display outputs 
    printf("Total deposit amount = %.2f\n", tot_deposit);
    printf("Total withdrawal amount = %.2f\n", tot_withdrawal);

    for(i=0; i<5; i++){
        if(customers[i].transaction_amount == max_deposit){
            printf("Name of the customer who has deposited the maximum amount: %s\n", customers[i].cus_name);
        }
        if(customers[i].transaction_amount == min_withdrawal){
            printf("Name of the customer who has withdrawn the minimum amount: %s\n", customers[i].cus_name);
        }
    }
    return 0;
}
