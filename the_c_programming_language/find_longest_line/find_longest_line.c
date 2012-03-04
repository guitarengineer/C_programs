//the c programming language
//1.9 character arrays
//find the longest line in an input file

#include <stdio.h>
#define MAXLINE 1000  //max input length

int getlines(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
  int len;                //current line length
  int max;                //max line length seen so far
  char line[MAXLINE];     //current input line
  char longest[MAXLINE];  //longest line saved here

  max = 0;
  while((len = getlines(line, MAXLINE)) > 0)
    if (len > max)
    {
    max = len;
    copy(longest, line);
    }
  if (max > 0)
    printf("%s", longest);
  return 0;
}

//getline: read a line into s, return length
int getlines(char s[], int lim)
{
  int c, i;
  for (i=0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;
  if (c == '\n')
  {
  s[i] = c;
  ++i;
  }
  s[i] = '\0';
  return i;
}
//copy 'from' into 'to'; assume it is big enough
void copy(char to[], char from[])
{
  int i;
  i = 0;
  while((to[i] = from[i]) != '\0')
    ++i;
}
