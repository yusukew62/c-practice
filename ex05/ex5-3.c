#include <stdio.h>

float vertical;
float side;
float circumference;
char line[100];

int main()
{

  /* Input vertical and side */
  printf("Enter vertical and side: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%f %f", &vertical, &side); 

  /* Calculate circumference */
  circumference = (vertical + side) * 2.0;  

  /* Display result */
  printf("circumference: %f\n", circumference);

  return (0);
}
