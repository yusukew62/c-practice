#include <stdio.h>

char line[100];
int amount;
int cents;

int main()
{
  /* Enter the amount dollar */
  printf("Enter the amount dollar: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &amount);

  /* Calculate */
  // number of 25 cents
  printf("25 cents: %d\n", amount / 25);
  amount %= 25;
  // number of 10 cents
  printf("10 cents: %d\n", amount / 10);
  amount %= 10;
  // number of 5 cents
  printf("5 cents: %d\n", amount / 5);
  amount %= 5;
  // number of 1 cents
  printf("1 cents: %d\n", amount);

  return (0);
}
