#include <stdio.h>

char line[100];
int correct_parcent;

int main()
{
  /* Enter correct parcent */
  printf("Enter correct parcent: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &correct_parcent);

  /* Display grade */
  if (correct_parcent < 0) {
    printf("Bad value\n");
  } else if (correct_parcent <= 60) {
    printf("Grade is F\n");
  } else if(correct_parcent <= 70) {
    printf("Grade is D\n");
  } else if(correct_parcent <= 80) {
    printf("Grade is C\n");
  } else if(correct_parcent <= 90) {
    printf("Grade is B\n");
  } else if(correct_parcent <= 100) {
    printf("Grade is A\n");
  } else  {
    printf("Bad value\n");
  }

  return (0);
}
