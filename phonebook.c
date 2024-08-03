#include<cs50.h>
#include<stdio.h>
#include<string.h>

// int main(void)
// {
//   string names[] = {"Carter", "David", "John"}
//   string numbers[] = {"+1-123-456-7890", "+1-123-456-7891", "+1-123-456-7892"};
//   string name = get_string("Name: ");
//   for (int i = 0, i < 3; i++)
//   {
//     if (strcmp(names[i], name) == 0)
//     {
//       printf("Found %s\n", numbers[i]);
//       return 0;
//     }
//   }
//   printf("Not Found\n");
//   return 1;
// }

typedef struct
{
  string name;
  string number;
} person; // This is the right way of styling it 

int main(void)
{
  person people[3];
  people[0].name = "Carter";
  people[0].number = "+1-1617-495-1000";

  people[1].name = "David";
  people[1].number = "+1-617-495-1001";

  people[2].name = "John";
  people[2].number = "+1-123-456-7892";

  string name = get_string("Name: ");
  for (int i = 0, i < 3; i++)
  {
    if (strcmp(people[i].name, name) == 0)
    {
      printf("Found %s\n", people[i].number);
      return 0;
    }
  }
  printf("Not Found\n");
  return 1;
}
