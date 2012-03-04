#include <stdio.h>
/* count characters on input, first version*/

/*
 use from command line:
 >make count_char
 >count_char < test_text_file.txt
 */

int main()
{
  double nc;
  for (nc = 0; getchar() != EOF; ++nc);
  printf("%.0f\n", nc);
}
