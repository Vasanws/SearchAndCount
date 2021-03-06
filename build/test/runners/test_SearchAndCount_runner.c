/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_SearchAndCount_given_2_same_words_the_expect_readLines_find_2_the(void);
extern void test_SearchAndCount_given_2_same_words_of_expect_readLines_find_2_of(void);
extern void test_SearchAndCount_given_2_same_words_compute_expect_readLines_find_2_compute(void);
extern void test_SearchAndCount_given_3_same_words_comput_expect_readLines_find_3_comput(void);
extern void test_SearchAndCount_given_4_same_words_comp_expect_readLines_find_4_comp(void);


/*=======Mock Management=====*/
static void CMock_Init(void)
{
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
  GlobalOrderError = NULL;
}
static void CMock_Verify(void)
{
}
static void CMock_Destroy(void)
{
}

/*=======Test Reset Options=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  CMock_Verify();
  CMock_Destroy();
  CMock_Init();
  setUp();
}
void verifyTest(void);
void verifyTest(void)
{
  CMock_Verify();
}

/*=======Test Runner Used To Run Each Test=====*/
static void run_test(UnityTestFunction func, const char* name, int line_num)
{
    Unity.CurrentTestName = name;
    Unity.CurrentTestLineNumber = line_num;
#ifdef UNITY_USE_COMMAND_LINE_ARGS
    if (!UnityTestMatches())
        return;
#endif
    Unity.NumberOfTests++;
    UNITY_CLR_DETAILS();
    UNITY_EXEC_TIME_START();
    CMock_Init();
    if (TEST_PROTECT())
    {
        setUp();
        func();
    }
    if (TEST_PROTECT())
    {
        tearDown();
        CMock_Verify();
    }
    CMock_Destroy();
    UNITY_EXEC_TIME_STOP();
    UnityConcludeTest();
}

/*=======MAIN=====*/
int main(void)
{
  UnityBegin("test_SearchAndCount.c");
  run_test(test_SearchAndCount_given_2_same_words_the_expect_readLines_find_2_the, "test_SearchAndCount_given_2_same_words_the_expect_readLines_find_2_the", 8);
  run_test(test_SearchAndCount_given_2_same_words_of_expect_readLines_find_2_of, "test_SearchAndCount_given_2_same_words_of_expect_readLines_find_2_of", 19);
  run_test(test_SearchAndCount_given_2_same_words_compute_expect_readLines_find_2_compute, "test_SearchAndCount_given_2_same_words_compute_expect_readLines_find_2_compute", 30);
  run_test(test_SearchAndCount_given_3_same_words_comput_expect_readLines_find_3_comput, "test_SearchAndCount_given_3_same_words_comput_expect_readLines_find_3_comput", 41);
  run_test(test_SearchAndCount_given_4_same_words_comp_expect_readLines_find_4_comp, "test_SearchAndCount_given_4_same_words_comp_expect_readLines_find_4_comp", 52);

  return UnityEnd();
}
