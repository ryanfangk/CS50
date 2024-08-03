#include <stdio.h>

int main (void)
{
  char *s = "HI!";
  printf("%p\n", s);
  printf("%p\n", &*s);
  printf("%p\n", &s[0]);
}

// {
//   int n = 50;
//   int *p = &n;
//   // printf("%p\n",p)
//   printf("%i\n", *p);
// }

// {
//   int n = 50;
//   int *p = &n;
//   printf("%i\n", *p);
//   *p = 20;
//   printf("%i\n", n);
// }

// typedef int integer;

// typedef uint8_t BYTE;

// typedef char *string;
