#include <stdio.h>

const float PI = 3.1415927;
char line[10];
float radius;
float volume;

int main()
{
  printf("Enter radius: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%f", &radius);

  volume = 4.0 / 3.0 * PI * radius * radius * radius;

  printf("volume: %f\n", volume);

  return (0);
}
