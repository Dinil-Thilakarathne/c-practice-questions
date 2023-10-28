#include <stdio.h>

float calDiscount( int time, float totAmount){
    // declare variable
    float discount; 

    // calculate discount according to the time 
    if (time >= 16 && time <= 19 ){
        if (totAmount >= 5000){
            discount = totAmount * 0.1;
        }else if(totAmount >= 2500){
            discount = totAmount * 0.07;
        }
        
    }else if(time >= 20 && time <= 22){
        if (totAmount >= 5000){
            discount = totAmount * 0.12;
        }else if(totAmount >= 2500){
            discount = totAmount * 0.09;
        } 
    }
    return discount;
}

float testCalDiscount(){
    printf("These are just test cases\n");
    printf("Time : 17 , Total Amount : 5000.00 , discount : %.2f\n", calDiscount(17, 5000.00));
    printf("Time : 18 , Total Amount : 2500.00 , discount : %.2f\n", calDiscount(18, 2500.00));
}

void displayGift(float finalTot){
    // display gift type according to the final amount 
    if(finalTot>=7000){
        printf("Your Gift is - Packet of Milk");
    }else if(finalTot >= 5000){
        printf("Your Gift is - 1 kg of Sugar");
    }else if(finalTot >= 3000){
        printf("Your Gift is - Pack of 6 Eggs");
    }
}

// main function begin
int main(void)
{
    // declare variables 
    int time;
	float totAmount, finalAmount;

    testCalDiscount(); // call testCalDiscount function
    
    puts(""); // break line
    
    // get valid time using do while loop 
    do{
        printf("Enter time: ");
        scanf("%d", &time);
    }while(!(time >= 16 && time <= 22));
    

    // display total amount 
    printf("Enter total Amount: ");
    scanf("%f", &totAmount);

    puts(""); // break line
    
    // calculate final amount and display it 
    finalAmount = totAmount - calDiscount(time, totAmount);
    printf("Final Amount : %.2f\n", finalAmount);
    
    puts(""); // break line
    
    // call displayGift function 
    displayGift(finalAmount);
    
    return 0;
}
// end main function 
