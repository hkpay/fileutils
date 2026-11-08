#include <stdio.h>
int main(int argc, char* argv[])
{
  if (argc == 1)
  {
    printf("Usage : echo <message>\n");
  }
  else
  {
    for (int i = 1; i < argc; ++i)
    {
      printf("%s", argv[i]);
      if (argc > 1)
      {
        printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}
