#include <stdio.h>

int main() {
  char strings[20];
  int i, j;

  // Input a text from the keyboard and store in the array
  printf("Enter a text: ");
  scanf("%s", strings);

  int length = strlen(strings);
  for (i = 0; i < length / 2; i++) {
    char temp = strings[i];
    strings[i] = strings[length - 1 - i];
    strings[length - 1 - i] = temp;
  }

  // Display the array elements
  printf("Reversed text: %s\n", strings);

  return 0;
}

