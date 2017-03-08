#include <stdio.h>

char line[100];
int total_minutes;
int hour;
int minutes;

int main()
{
  /* Enter total minutes */
  printf("Enter total minutes: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &total_minutes);

  /* Calculate minutes */
  hour = total_minutes / 60;
  minutes = total_minutes % 60;

  /* Display result */
  printf("%d minutes is %d hour %d minutes\n", total_minutes, hour, minutes);

  return (0);
}
