#include <stdio.h>

int main(void)
{
  int i, j, rows = 5;
  int stars, spaces;
  stars = 1;
  spaces = rows - 1;
  for (i = 1; i < rows * 2; i++)
  {
    for (j = 1; j <= spaces; j++)
    {
      // printf(" ");
    }
    for (j = 1; j < stars * 2; j++)
    {
      // printf("*");
    }
    printf("\n");

    printf("%d", stars);
    if (i < rows)
    {
      // spaces--;
      stars++;
    }
    else
    {
      // spaces++;
      // stars--;
    }
  }
  printf("\n\n");
  return 0;
}