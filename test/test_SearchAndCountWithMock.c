#include "unity.h"
#include "SearchAndCount.h"
#include "mock_ReadLine.h"
#include <stdlib.h>

void setUp(void){}

void tearDown(void){}

void test_searchAndCountWordLines_given_the_word_and_a_file_count_word_people_expect_4_word_people(void)
{
  int count;
  char *filename = "./test/File/vodka.txt";
  char *word = "people";
  char **testlines = malloc(sizeof(char*) * 1024);
  char *lines[] = {
    //                              *
    "In motherland of Russia, the people are the source of the development of the country.",
    //                             *
    "Joseph Stalin promises the people with more jobs and provides best services.",
    //                                        *
    "But due to Russia low in supplies, the people needs to suffer from their dictatorship of their leader.",
    //      *
    "The people has fought the war against Germany and the Red Army won the war.",
    
    "With unfortunate event, Russia lost more men during the war. It was a great lost for the Russians.",
    NULL
  };
  for(int i = 0; lines[i]!= NULL; i++){
    testlines[i] = lines[i];
  }
  readLines_ExpectAndReturn(filename, lines);
  count = searchAndCountWordLines(wordToFind, filename);
  TEST_ASSERT_EQUAL(4, count);
}

void test_searchAndCountWordLines_given_the_word_and_a_file_count_word_the_expect_11_word_the(void)
{
  int count;
  char *filename = "./test/File/vodka.txt";
  char *word = "the";
  char **testlines = malloc(sizeof(char*) * 1024);
  char *lines[] = {
    //                         *              *             *                  *
    "In motherland of Russia, the people are the source of the development of the country.",
    //                       *
    "Joseph Stalin promises the people with more jobs and provides best services.",
    //                                   *
    "But due to Russia low in supplies, the people needs to suffer from their dictatorship of their leader.",
    //                      *                           *                *
    "The people has fought the war against Germany and the Red Army won the war.",
    //                                                    *                                *
    "With unfortunate event, Russia lost more men during the war. It was a great lost for the Russians.",
    NULL
  };
  for(int i = 0; lines[i]!= NULL; i++){
    testlines[i] = lines[i];
  }
  readLines_ExpectAndReturn(filename, lines);
  count = searchAndCountWordLines(wordToFind, filename);
  TEST_ASSERT_EQUAL(11, count);
}

void test_searchAndCountWordLines_given_the_word_and_a_file_count_word_he_expect_15_word_he(void)
{
  int count;
  char *filename = "./test/File/vodka.txt";
  char *word = "he";
  char **testlines = malloc(sizeof(char*) * 1024);
  char *lines[] = {
    //      *                  *              *             *                  *
    "In motherland of Russia, the people are the source of the development of the country.",
    //                       *
    "Joseph Stalin promises the people with more jobs and provides best services.",
    //                                   *                                *                     *
    "But due to Russia low in supplies, the people needs to suffer from their dictatorship of their leader.",
    //*                     *                           *                *
    "The people has fought the war against Germany and the Red Army won the war.",
    //                                                    *                                *
    "With unfortunate event, Russia lost more men during the war. It was a great lost for the Russians.",
    NULL
  };
  for(int i = 0; lines[i]!= NULL; i++){
    testlines[i] = lines[i];
  }
  readLines_ExpectAndReturn(filename, lines);
  count = searchAndCountWordLines(wordToFind, filename);
  TEST_ASSERT_EQUAL(15, count);
}




