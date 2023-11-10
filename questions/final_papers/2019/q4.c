#include <stdio.h>

int main() {
  FILE *fp;
  char name[50];
  long loyaltyNumber;
  int i, duplicateFound;

  // Input new customer details
  printf("Enter customer name: ");
  scanf("%s", name);

  printf("Enter customer loyalty number: ");
  scanf("%lld", &loyaltyNumber);

  // Open the file for reading
  fp = fopen("loyalty.dat", "r");

  // Check if loyalty number already exists
  duplicateFound = 0;
  if (fp != NULL) {
    long long tempLoyaltyNumber;
    char tempName[50];

    while (fscanf(fp, "%lld %s\n", &tempLoyaltyNumber, tempName) == 1) {
      if (loyaltyNumber == tempLoyaltyNumber) {
        duplicateFound = 1;
        printf("Error: Customer with loyalty number %lld already exists\n", loyaltyNumber);
        break;
      }
    }
    fclose(fp);
  }

  // Append new customer details to the file if it doesn't exist
  if (duplicateFound == 0) {
    fp = fopen("loyalty.dat", "a");
    if (fp != NULL) {
      fprintf(fp, "%lld %s\n", loyaltyNumber, name);
      fclose(fp);
    }
  }

  return 0;
}
