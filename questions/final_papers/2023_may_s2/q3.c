#include <stdio.h>
#include <assert.h>

float payementAmount(int date, char cardType, double amount);
void displayLoyaltytype(double payment);
testpayementAmount();

int main(void)
{
    int date;
    char cardType;
    double amount;

    printf("Enter Data: ");
    scanf("%d", &date);

    printf("Enter Card Type: ");
    scanf(" %c", &cardType);

    printf("Enter total amount : ");
    scanf("%lf", &amount);

    testpayementAmount();

    printf("Total payable: %.2lf\n", payementAmount(date, cardType, amount));
    displayLoyaltytype(payementAmount(date, cardType, amount));
    return 0;
}

float payementAmount(int date, char cardType, double amount){

    if(date==5 && cardType == 'a'){
        amount -= amount * .2;
    }else if(date==6 && cardType == 'b'){
        amount -= amount * .25;
    }else if(date == 7 && (cardType == 'a' || cardType == 'c')){
        amount -= amount * .3;
    }else if(date == 8 && (cardType == 'b' || cardType == 'c')){
        amount -= amount * .2;
    }

    return amount;
}

void displayLoyaltytype(double payment){
    if(payment > 30000){
        printf("Loyalty card Type : Gold\n");
    }else if(payment > 10000){
        printf("Loyalty card Type : Silver\n");
    }else{
        printf("Loyalty card Type : Bronze\n");
    }
}

testpayementAmount(){
    assert(payementAmount(5,'a',50000.00));
    assert(payementAmount(6,'b',65000.00));
    assert(payementAmount(8,'c',45000.00));
}
