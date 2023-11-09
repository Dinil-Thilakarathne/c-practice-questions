#include <stdio.h>

int main() {
  int package_ID, number_of_guests;
  float tot_payment;
  char photograph;

  do {
    printf("Enter package ID: ");
    scanf("%d", &package_ID);

    switch (package_ID) {
      case 1:
        printf("Enter no of guests: ");
        scanf("%d", &number_of_guests);
        tot_payment = (float) number_of_guests * 500.00;
        break;

      case 2:
        printf("Enter no of guests: ");
        scanf("%d", &number_of_guests);
        if (number_of_guests > 40) {
          printf("The event can have at most 40 participants in this package!\n");
        } else if (number_of_guests > 20) {
          tot_payment = (float) number_of_guests * 640.00;
        } else {
          tot_payment = (float) number_of_guests * 600.00;
        }
        break;

      case 3:
        printf("Enter no of guests: ");
        scanf("%d", &number_of_guests);
        tot_payment = (float) number_of_guests * 800.00;
        break;

      case 4:
        printf("Enter no of guests: ");
        scanf("%d", &number_of_guests);
        tot_payment = (float) number_of_guests * 2000.00;

        printf("Do you want a photograph (Y/N): ");
        scanf(" %c", &photograph);
        if (photograph == 'Y') {
          tot_payment += (float) number_of_guests * 1000.00;
          tot_payment -= tot_payment * .15;
        }
        break;

      default:
        printf("Invalid ID");
        return -1;
        break;
    }

    if (package_ID != 88) {
      printf("You have selected package ID: %d\n", package_ID);
      printf("Total charge for the event: %.2f\n", tot_payment);
    }
  } while (package_ID != 88);

  return 0;
}
