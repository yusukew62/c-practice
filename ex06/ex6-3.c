#include <stdio.h>

char line[100];
int correct_parcent;
int grade;

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
    printf("Grade is D");
  } else if(correct_parcent <= 80) {
    printf("Grade is C");
  } else if(correct_parcent <= 90) {
    printf("Grade is B");
  } else if(correct_parcent <= 100) {
    printf("Grade is A");
  } else  {
    printf("Bad value\n");
  }

  /* Display + or - of grade */
  if (correct_parcent > 60 && correct_parcent <= 100) {
    grade = correct_parcent % 10;
    if (grade == 0 ) {
      printf("+\n");
    } else if (grade <= 3) {
      printf("-\n");
    } else if (grade <= 7) {
      printf("\n");
    } else if (grade <= 9) {
      printf("+\n");
    }
  }

  return (0);
}
