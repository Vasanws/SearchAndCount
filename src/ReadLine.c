#include "ReadLine.h"
#include  <stdio.h>
#include  <malloc.h>
#include  <stdlib.h>
#include  <string.h>

char **readLines(char *filename)
{
  char **lines = malloc(sizeof(char *) * 1024);
  char buffer[1024];
  FILE *fptr;
  //open the filename 
  fptr = fopen(filename, "r");
  if(fptr==NULL)
  {
    printf("Problem opening input file");
  }
  int i = 0;
  while(!feof(fptr))
  {
    fgets(buffer, 1024,(FILE*)fptr);
    *lines = strdup(buffer);
    lines++;
    i++;
  }
  *lines=NULL;
  for (i; i>0; i--)
  {
    lines--;
  }
  fclose(fptr);
  return lines;
}
