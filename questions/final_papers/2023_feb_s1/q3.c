#include <stdio.h>
#include <assert.h>

float calcpayment(int pType, float totalData);
float calcTax(float payment);
void displayDetails(float payment, float tax);

int main(void)
{
    int pType;
    float totalData, payment, tax;

    assert(calcpayment(1, 2.5));

    printf("Package Type: ");
    scanf("%d", &pType);

    printf("Total data usage: ");
    scanf("%f", &totalData);

    payment = calcpayment(pType, totalData);
    tax = calcTax(payment);

    displayDetails(payment, tax);
    return 0;
}


float calcpayment(int pType, float totalData)
{
    float excessDataUsage=0, excessDataUsageCharge=0, payment;

    switch (pType)
    {
    case 1:
        if(totalData > 1.5){
            excessDataUsage = (totalData * 1024.0) - (1.5 * 1024.0);

            excessDataUsageCharge = excessDataUsage * 2.0;
        }

        payment = excessDataUsageCharge + 120.0;
        
        break;
    
    case 2:
        if(totalData > 5){
            excessDataUsage = (totalData * 1024.0) - (5 * 1024.0);

            excessDataUsageCharge = excessDataUsage * 1.5;
        }

        payment = excessDataUsageCharge + 350.0;
        
        break;
    
    case 3:
        if(totalData > 10){
            excessDataUsage = (totalData * 1024.0) - (10 * 1024.0);

            excessDataUsageCharge = excessDataUsage * 1;
        }

        payment = excessDataUsageCharge + 660.0;       
        break;
    
    case 4:
        if(totalData > 20){
            excessDataUsage = (totalData * 1024.0) - (20 * 1024.0);

            excessDataUsageCharge = excessDataUsage * .5;
        }

        payment = excessDataUsageCharge + 1200.0;       
        break;
    

    default:
        printf("Invalid Package Type! \n");
        break;
    }

    return payment;
}

float calcTax(float payment)
{
    float tax;

    tax = payment * .05;

    return tax;
}

void displayDetails(float payment, float tax)
{
    float monthlyBillPayment;

    monthlyBillPayment = payment + tax;

    printf("Payment\tTax Amount\tMonthly bill payment\n");
    printf("%6.2f\t%10.2f\t%20.2f\n", payment, tax, monthlyBillPayment);
}