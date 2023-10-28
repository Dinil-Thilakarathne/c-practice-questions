#include <stdio.h>

struct customer
{
  int cus_acc_no;
  char cus_name[50];
  char transaction_type;
  float transaction_amount;
};

float calculate_total_deposit(struct customer *customers, int num_customers) {
  float total_deposit = 0.0f;
  for (int i = 0; i < num_customers; i++) {
    if (customers[i].transaction_type == 'd') {
      total_deposit += customers[i].transaction_amount;
    }
  }
  return total_deposit;
}

float calculate_total_withdrawal(struct customer *customers, int num_customers) {
  float total_withdrawal = 0.0f;
  for (int i = 0; i < num_customers; i++) {
    if (customers[i].transaction_type == 'w') {
      total_withdrawal += customers[i].transaction_amount;
    }
  }
  return total_withdrawal;
}

float find_maximum_deposit(struct customer *customers, int num_customers) {
  float maximum_deposit = customers[0].transaction_amount;
  for (int i = 1; i < num_customers; i++) {
    if (customers[i].transaction_amount > maximum_deposit) {
      maximum_deposit = customers[i].transaction_amount;
    }
  }
  return maximum_deposit;
}

float find_minimum_withdrawal(struct customer *customers, int num_customers) {
  float minimum_withdrawal = customers[0].transaction_amount;
  for (int i = 1; i < num_customers; i++) {
    if (customers[i].transaction_amount < minimum_withdrawal) {
      minimum_withdrawal = customers[i].transaction_amount;
    }
  }
  return minimum_withdrawal;
}

int main(void) {
  struct customer customers[5]; // create 5 customer struct

  // declare variables
  float total_deposit, total_withdrawal, maximum_deposit, minimum_withdrawal;

  // get user input for customer details
  for (int i = 0; i < 5; i++) {
    printf("Enter customer account number: ");
    scanf("%d", &customers[i].cus_acc_no);

    printf("Enter customer name: ");
    scanf("%s", customers[i].cus_name);

    printf("Enter customer transaction type: ");
    scanf(" %c", &customers[i].transaction_type);

    printf("Enter customer transaction amount: ");
    scanf("%f", &customers[i].transaction_amount);

    puts(""); // break line
  }

  // calculate total deposit and withdrawal amounts
  total_deposit = calculate_total_deposit(customers, 5);
  total_withdrawal = calculate_total_withdrawal(customers, 5);

  // find maximum and minimum deposit and withdrawal amounts
  maximum_deposit = find_maximum_deposit(customers, 5);
  minimum_withdrawal = find_minimum_withdrawal(customers, 5);

  // display outputs
  printf("Total deposit amount = %.2f\n", total_deposit);
  printf("Total withdrawal amount = %.2f\n", total_withdrawal);

  for (int i = 0; i < 5; i++) {
    if (customers[i].transaction_amount == maximum_deposit) {
      printf("Name of the customer who has deposited the maximum amount: %s\n", customers[i].cus_name);
    }
    if (customers[i].transaction_amount == minimum_withdrawal) {
      printf("Name of the customer who has withdrawn the minimum amount: %s\n", customers[i].cus_name);
    }
  }

  return 0;
}
