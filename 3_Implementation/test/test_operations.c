/**
 * @file test_functions.c
 * @author Akshhh51
 * @brief Test Functions
 * @version 0.1
 * @date 2021-11-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"

static fin_opt c1 = {0, 0, 0};

/* Prototypes for all the test functions */
int test_add;
int test_subtract;
int test_multiply;
int test_divide;
int test_sq;
int test_sqrt1;
void test_exit(void);

void setUp(){}
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add);
  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);
  RUN_TEST(test_sq);
  RUN_TEST(test_sqrt1);
  RUN_TEST(test_exit);
  
  /* Close the Unity Test Framework */
  return UNITY_END();
}
  int test_add {
  TEST_ASSERT_EQUAL(30, add(10, 20));
  
  TEST_ASSERT_EQUAL(15000, add(7500, 7500));

  TEST_ASSERT_EQUAL(4, add(7,-3));

  TEST_ASSERT_EQUAL(-10, add(-7,-3));

  TEST_ASSERT_EQUAL(-1, add(2147483647,2147483647));  
}

  int test_subtract {
  TEST_ASSERT_EQUAL(100, subtract(1000, 900));

  TEST_ASSERT_EQUAL(130, subtract(100, -30));

  TEST_ASSERT_EQUAL(-7, subtract(-10, -3));

  TEST_ASSERT_EQUAL(-3, subtract(0, 3)); 
}
  int  test_multiply {
  TEST_ASSERT_EQUAL(0, multiply(1, 0));
  
  TEST_ASSERT_EQUAL(10, multiply(2, 5));

  TEST_ASSERT_EQUAL(-10, multiply(-2, 5));

  TEST_ASSERT_EQUAL(10, multiply(-2, -5));

  TEST_ASSERT_EQUAL(-1, multiply(10, 2147483647));

  TEST_ASSERT_EQUAL(-1, multiply(2147483647, 2147483647));
}

  int test_divide {
  TEST_ASSERT_EQUAL(10, divide(21, 2));

  TEST_ASSERT_EQUAL(1, divide(2, 2));

  TEST_ASSERT_EQUAL(-1, divide(-2, 2));

  TEST_ASSERT_EQUAL(1, divide(-2, -2));

  TEST_ASSERT_EQUAL(0, divide(1, 0));
}
  int test_sq{
  TEST_ASSERT_EQUAL(25, sq(5);

}
  int test_sqrt1{
  TEST_ASSERT_EQUAL(5,sqrt1(25);
}
void test_exit(void){
  TEST_ASSERT_EQUAL(exit);
}
