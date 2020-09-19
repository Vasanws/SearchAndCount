#include "build/temp/_test_ReadLine.c"
#include "src/ReadLine.h"
#include "C:/Ruby25-x64/lib/ruby/gems/2.5.0/gems/ceedling-0.30.0/vendor/unity/src/unity.h"






void setUp(void){}



void tearDown(void){}















void test_char_readLines_line1_of_text(void)

{

  char *filename = "./test/File/FileIO.txt";

  char **lines = readLines(filename);

  UnityAssertEqualString((const char*)((*lines)), (const char*)(("In the world of today, we have a super computer which can compute complex calculations.\n")), (

 ((void *)0)

 ), (UNITY_UINT)(21));

  free(lines);

}



void test_char_readLines_line2_of_text(void)

{

  char *filename = "./test/File/FileIO.txt";

  char **lines = readLines(filename);

  UnityAssertEqualString((const char*)((lines[1])), (const char*)(("the cost of machines is high.\n")), (

 ((void *)0)

 ), (UNITY_UINT)(29));

  free(lines);

}



void test_char_readLines_line3_of_text(void)

{

  char *filename = "./test/File/FileIO.txt";

  char **lines = readLines(filename);

  UnityAssertEqualString((const char*)((lines[2])), (const char*)(("comput science.")), (

 ((void *)0)

 ), (UNITY_UINT)(37));

  free(lines);

}



void test_char_readLines_line4_of_text(void)

{

  char *filename = "./test/File/FileIO.txt";

  char **lines = readLines(filename);

  UnityAssertEqualString((const char*)((lines[3])), (const char*)((

 ((void *)0)

 )), (

 ((void *)0)

 ), (UNITY_UINT)(45));

  free(lines);

}
