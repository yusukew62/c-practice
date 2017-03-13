#include <stdio.h>
#include <math.h>

char line[100];
int point[2][2];
int distance_x;
int distance_y;
double square;
double distance;

int main()
{
  
  /* Enter x, y on pointA */
  printf("Enter x, y on pointA: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d %d", &point[0][0], &point[0][1]);

  /* Enter x, y on pointB */
  printf("Enter x, y on pointB: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d %d", &point[1][0], &point[1][1]);

  /* Calculate Square */
  distance_x = point[1][0] - point[0][0];
  distance_y = point[1][1] - point[0][1];
  square = (distance_x * distance_x) + (distance_y * distance_y);
  distance = sqrt(square);

  /* Display result */
  printf("Square: %lf\n",square);
  printf("Distance: %lf\n", distance);
  
  return (0);
}
