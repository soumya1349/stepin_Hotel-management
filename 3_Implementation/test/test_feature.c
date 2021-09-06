#include "unity.h"
#include <feature.h>

/* Modify these two lines according to the project */

#define PROJECT_NAME    "Hotel_management"

/* Prototypes for all the test functions */
void test_book_room(void);
void test_book_hall(void);
void test_program(void);


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_book_room);
  RUN_TEST(test_book_hall);
  RUN_TEST(test_program);
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_book_room(void) {
  TEST_ASSERT_EQUAL(1000, book_room(3));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(500, book_room(1));
}

void test_book_hall(void) {
  TEST_ASSERT_EQUAL(10000, book_hall(1));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(15000, book_hall(2));
}



void test_program(void) {
  TEST_ASSERT_EQUAL(500, program(1));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(800, program(2));
}
