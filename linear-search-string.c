#include <cs50.h>
#include <stdio.h>

int main(void)
{
  string strings[] = {"one", "two", "three", "four", "five", "six", "seven"};
  
  string s = get_string("String: ");
  for (int = 0; i < 6; i++)
  {
    if (strcmp(strings[i], s) == 0)
    {
      printf("Found\n");
      return 0;
    }
  }
  printf("Not Found\n");
  return 1;
}