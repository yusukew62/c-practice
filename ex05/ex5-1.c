#include <stdio.h>

float celsius;
float fahrenheit;
char line[100];

int main()
{
  /* Input value of celsius */
  printf("Input celsius: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%f", &celsius);

  /* Calculate fahrenheit based on celsius */
  fahrenheit = 9.0 / 5.0 * celsius + 32;

  /* Display result */
  printf("celsius: %f\n", celsius);
  printf("fahrenheit : %f\n", fahrenheit);

  return (0);
}
