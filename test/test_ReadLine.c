#include "unity.h"
#include "ReadLine.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
void setUp(void){}

void tearDown(void){}

/*
* In the world of today, we have a super computer which can compute complex calculations.
* the cost of machines is high. 
* comput science.
*/

void test_char_readLines_line1_of_text(void)
{
  char *filename = "./test/File/FileIO.txt";
  char **lines = readLines(filename);
  TEST_ASSERT_EQUAL_STRING(*lines, "In the world of today, we have a super computer which can compute complex calculations.\n");
  free(lines);
}

void test_char_readLines_line2_of_text(void)
{
  char *filename = "./test/File/FileIO.txt";
  char **lines = readLines(filename);
  TEST_ASSERT_EQUAL_STRING(lines[1], "the cost of machines is high.\n");
  free(lines);
}

void test_char_readLines_line3_of_text(void)
{
  char *filename = "./test/File/FileIO.txt";
  char **lines = readLines(filename);
  TEST_ASSERT_EQUAL_STRING(lines[2], "comput science.");
  free(lines); 
}

void test_char_readLines_line4_of_text(void)
{
  char *filename = "./test/File/FileIO.txt";
  char **lines = readLines(filename);
  TEST_ASSERT_EQUAL_STRING(lines[3], NULL);
  free(lines); 
}