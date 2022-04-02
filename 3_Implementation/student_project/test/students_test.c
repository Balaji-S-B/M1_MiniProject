#include "unity.h"
#include "students.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_add_student(void) {
  Student student = {"arul", "19bit011", "01 APR 2022", 3, 1, 10, {{"u18itt", "dmt", "O", 10, 4}}};
  TEST_ASSERT_EQUAL(0, addStudent(&student));
}

void test_search_student(void){
  TEST_ASSERT_EQUAL(1, searchStudent("19bit011"));
}

void test_display_student(void) 
{ 
  TEST_ASSERT_EQUAL(1, displayStudent()>0);
}

int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add_student);
  RUN_TEST(test_search_student);
  RUN_TEST(test_display_student);

  /* Close the Unity Test Framework */
  return UNITY_END();
}