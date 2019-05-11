#include <stdio.h>
#include <string.h>

int main()
{
  char* c = NULL;
  printf("Hello, world!\n");
  printf("A BAD POINTER %d\n",strcmp(c,"haha"));
  return 0;
}
