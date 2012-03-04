#include <stdio.h>

//count lines in input

int main()
{
  int c, numlines;
  numlines = 0;
  while((c = getchar()) != EOF)
    if (c == '\n')
      ++numlines;
  printf("%d\n",numlines);
}
