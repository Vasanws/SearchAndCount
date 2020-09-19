#include "unity.h"
#include "SearchAndCount.h"
#include "ReadLine.h"

void setUp(void){}
void tearDown(void){}

void test_searchAndCount_given_2_same_words_the_expect_readLines_find_2_the(void)
{
  //In the world of today, we have a super computer which can compute complex calculations. the cost of machines is high. comput science.
  int count;
  char *filename = "./test/File/FileIO.txt";
  char *word = "the";
  count = searchAndCountWordLines(word, filename);
  //run test output
  TEST_ASSERT_EQUAL(2, count);
}

void test_searchAndCount_given_2_same_words_of_expect_readLines_find_2_of(void)
{
  //In the world of today, we have a super computer which can compute complex calculations. the cost of machines is high. comput science.
  int count;
  char *filename = "./test/File/FileIO.txt";
  char *word = "of";
  count = searchAndCountWordLines(word, filename);
  //run test output
  TEST_ASSERT_EQUAL(2, count);
}

void test_searchAndCount_given_2_same_words_compute_expect_readLines_find_2_compute(void)
{
  //In the world of today, we have a super computer which can compute complex calculations. the cost of machines is high. comput science.
  int count;
  char *filename = "./test/File/FileIO.txt";
  char *word = "compute";
  count = searchAndCountWordLines(word, filename);
  //run test output 
  TEST_ASSERT_EQUAL(2, count);
}

void test_searchAndCount_given_3_same_words_comput_expect_readLines_find_3_comput(void)
{
  //In the world of today, we have a super computer which can compute complex calculations. the cost of machines is high. comput science.
  int count;
  char *filename = "./test/File/FileIO.txt";
  char *word = "comput";
  count = searchAndCountWordLines(word, filename);
  //run test output 
  TEST_ASSERT_EQUAL(3, count);
}

void test_SearchAndCount_given_4_same_words_comp_expect_readLines_find_4_comp(void)
{
  //In the world of today, we have a super computer which can compute complex calculations. the cost of machines is high. comput science.
  int count;
  char *filename = "./test/File/FileIO.txt";
  char *word = "comp";
  count = searchAndCountWordLines(word, filename);
  //run test output 
  TEST_ASSERT_EQUAL(4, count);
}