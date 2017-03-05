#include <stdio.h>

char line[100];
float kilometers;
float mile;

int main()
{
  /* Enter kilometers */
  printf("Enter kilometers: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%f", &kilometers);

  /* Calculate mile from kilometers */
  mile = kilometers * 0.6213712;

  /* Display result */
  printf("kilometers: %f\n", kilometers);
  printf("mile: %f\n", mile);

  return (0);
}
