#include "build/temp/_test_SearchAndCount.c"
#include "src/ReadLine.h"
#include "src/SearchAndCount.h"
#include "C:/Ruby25-x64/lib/ruby/gems/2.5.0/gems/ceedling-0.30.0/vendor/unity/src/unity.h"


void setUp(void){}

void tearDown(void){}



void test_SearchAndCount_given_2_same_words_the_expect_readLines_find_2_the(void)

{



  int count;

  char *filename = "./test/File/FileIO.txt";

  char *word = "the";

  count = searchAndCountWordLines(word, filename);



  UnityAssertEqualNumber((UNITY_INT)((2)), (UNITY_INT)((count)), (

 ((void *)0)

 ), (UNITY_UINT)(16), UNITY_DISPLAY_STYLE_INT);

}



void test_SearchAndCount_given_2_same_words_of_expect_readLines_find_2_of(void)

{



  int count;

  char *filename = "./test/File/FileIO.txt";

  char *word = "of";

  count = searchAndCountWordLines(word, filename);



  UnityAssertEqualNumber((UNITY_INT)((2)), (UNITY_INT)((count)), (

 ((void *)0)

 ), (UNITY_UINT)(27), UNITY_DISPLAY_STYLE_INT);

}



void test_SearchAndCount_given_2_same_words_compute_expect_readLines_find_2_compute(void)

{



  int count;

  char *filename = "./test/File/FileIO.txt";

  char *word = "compute";

  count = searchAndCountWordLines(word, filename);



  UnityAssertEqualNumber((UNITY_INT)((2)), (UNITY_INT)((count)), (

 ((void *)0)

 ), (UNITY_UINT)(38), UNITY_DISPLAY_STYLE_INT);

}



void test_SearchAndCount_given_3_same_words_comput_expect_readLines_find_3_comput(void)

{



  int count;

  char *filename = "./test/File/FileIO.txt";

  char *word = "comput";

  count = searchAndCountWordLines(word, filename);



  UnityAssertEqualNumber((UNITY_INT)((3)), (UNITY_INT)((count)), (

 ((void *)0)

 ), (UNITY_UINT)(49), UNITY_DISPLAY_STYLE_INT);

}



void test_SearchAndCount_given_4_same_words_comp_expect_readLines_find_4_comp(void)

{



  int count;

  char *filename = "./test/File/FileIO.txt";

  char *word = "comp";

  count = searchAndCountWordLines(word, filename);



  UnityAssertEqualNumber((UNITY_INT)((4)), (UNITY_INT)((count)), (

 ((void *)0)

 ), (UNITY_UINT)(60), UNITY_DISPLAY_STYLE_INT);

}
