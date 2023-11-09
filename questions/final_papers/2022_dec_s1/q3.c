#include <stdio.h>
#include <assert.h>

float calcInterest( int FDType, float depositAmount);
float calcTax(float annualInterest);
void displayDetails(float interest, float taxAmount);

int main(void)
{
    int deposit_type;
    float deposit_amount, annualInterest;

    assert(calcInterest(1, 10000.00));
    assert(calcInterest(3, 25000.00));

    while (1)
    {
        printf("Fixed Deposit Type: ");
        scanf("%d", &deposit_type);

        if (deposit_type == -1)
        {
            break;
        }
        

        printf("Deposit Amount : ");
        scanf("%f", &deposit_amount);

        annualInterest = calcInterest(deposit_type, deposit_amount);
        displayDetails(annualInterest, calcTax(annualInterest));

        puts("");
        
    }
    
    return 0;
}
float calcInterest( int FDType, float depositAmount){
    float annualInterest;

    switch (FDType)
    {
    case 1:
        annualInterest = depositAmount * .16;
        break;
    
    case 2:
        annualInterest = depositAmount * .15;
        break;
    
    case 3:
        annualInterest = depositAmount * .155;
        break;
    
    case 4:
        annualInterest = depositAmount * .175;
        break;
    
    default:
        break;
    }

    return annualInterest;
}

float calcTax(float annualInterest){
    float tax_amount; 

    tax_amount = annualInterest * .05;

    return tax_amount;
}

void displayDetails(float interest, float taxAmount){
    float amount_payable;

    amount_payable = interest - taxAmount;

    puts("");
    printf("Annual Intereset\t Tax amount\t Amount Payable\n");
    printf("%16.2f\t %9.2f\t %14.2f\n", interest, taxAmount , amount_payable);

}