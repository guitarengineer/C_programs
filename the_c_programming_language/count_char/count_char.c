#include <stdio.h>
/* count characters on input, first version*/

/*
 use from command line:
 >make count_char
 >count_char < test_text_file.txt
 */

int main()
{
  long nc;
  nc = 0;
  while (getchar() != EOF)
    ++nc;
  printf("%ld\n", nc);
}
