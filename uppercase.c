#incldue <cs50.h>
#incldue <ctype.h>
#incldue <stdio.h>
#incldue <string.h>

int main (void)
{
  string s = get_string("Before: ");
  prinf("After: ");
  for (int i = 0, n = strlen(s); i< n; i++)
  {
    // If lowercase
    // if (s[i] >= 'a' && s[i] <= 'z')
    // {
    //   // printf("%c", s[i] - 32);
    //   // printf("%c", s[i] - ('a' - 'A'));
    //   printf("%c", toupper(s[i]));
    // }
    // else
    // {
    //   printf("%c", s[i]);
    // }
    printf("%c", toupper(s[i]));
  }
  printf("\n");
}