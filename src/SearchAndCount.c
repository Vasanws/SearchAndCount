#include "SearchAndCount.h"
#include "ReadLine.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//char *(*)[] readLines(char *filename);

int searchAndCountWordLine(char *wordToFind, char *line) 
{
  int findWord = 0, count = 0;
  for(int i = 0; line[i]!= 0; i++){
    if(line[i] == wordToFind[findWord])
      findWord++;
    else
      findWord = 0;
  }
  if(wordToFind[findWord] == 0) {
    count++;
    findWord= 0;
  }
  return count;
}
// char* (*lines)[0];
  //lines[0] <== accessing the first linel
  //while(each line in line)
  //Should call searchAndCountWordLine()
  //sum all count;
int searchAndCountWordLines(char *wordToFind, char *filename)
{
  int i = 0, count = 0;
  char **lines = readLines(filename); 
  for(i = 0; lines[i] != NULL; i++){
    count += searchAndCountWordLines(wordToFind, filename);
  }
  free(*lines);
  return count;
}








