#include <stdio.h>

char line[100];
int hour;
int minutes;
int total_minutes;

int main()
{
  /* Enter hour and minutes */
  printf("Enter hour and minutes: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d %d", &hour, &minutes);

  /* Calculate minutes */
  total_minutes = hour * 60 + minutes;

  /* Display result */
  printf("total minutes: %d\n", total_minutes);

  return (0);
}
