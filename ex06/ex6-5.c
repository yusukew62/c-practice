#include <stdio.h>

char line[100];
int calendar_year;

int main()
{
  /* Enter years */
  printf("Enter calendar year: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &calendar_year);

  /* Check leap year */
  if (calendar_year % 4 == 0) {
    if ((calendar_year % 100 == 0) && (calendar_year % 400 != 0)) {
      printf("%d is exclude year\n", calendar_year);
    } else {
      printf("%d is leap year\n", calendar_year);
    }
  } else {
    printf("%d is not leap year\n", calendar_year);
  }

  return (0);
}
