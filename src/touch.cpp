#include <stdio.h>

int main(int argc, char* argv[])
{
  if (argc == 1)
  {
    printf("Usage: touch <path>\n");
  }
  else
  {
    for (int i = 1; i < argc; ++i)
    {
      const char* path = argv[i];
      FILE* touched = fopen(path, "w");
      if (!touched)
      {
        printf("Error trying to touch %s\n", path);
      }
      else
      {
        fclose(touched);
      }
    }
  }
  return 0;
}
