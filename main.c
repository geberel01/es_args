#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main(int argc, char *argv[])
{
  int i=0;

  printf("numero elementi %d\n",argc);
  for(i=0;i<argc;i++)
    printf("n. %d\tval: %s\t\n",i,argv[i]);
}

// test modifica