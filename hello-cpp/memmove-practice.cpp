/* memmove example */
#include <stdio.h>
#include <string.h>

int main ()
{
  char str[] = "memmove can be very useful......";
  memmove (str+3,str+15,7);
  puts (str);
  return 0;
}
