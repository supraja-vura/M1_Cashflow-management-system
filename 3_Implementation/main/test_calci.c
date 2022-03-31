#include "unity.h"
#include "calci.h"

void setUp(void)
{
}

void tearDown(void){
}

void automated_success_operations()
{
    int ex_ans= 0;
    int ans=0;

    TEST_ASSERT_EQUAL(SUCCESS, addition(20 ,30 ,&ans));
    TEST_ASSERT_EQUAL(50,ans);

    TEST_ASSERT_EQUAL(SUCCESS, subtraction(30 ,20 ,&ans));
    TEST_ASSERT_EQUAL(10,ans);

    TEST_ASSERT_EQUAL(SUCCESS, multiplication(2 ,3 ,&ans));
    TEST_ASSERT_EQUAL(6,ans);

    TEST_ASSERT_EQUAL(SUCCESS, division(30,3 ,&ans));
    TEST_ASSERT_EQUAL(10,ans);

    TEST_ASSERT_EQUAL(SUCCESS, modulus(10,3 ,&ans));
    TEST_ASSERT_EQUAL(1,ans);

    TEST_ASSERT_EQUAL(SUCCESS, power(2,3 ,&ans));
    TEST_ASSERT_EQUAL(8,ans);
}

void automated_overflow_operations()
{
   int ex_ans= 0;
    int ans=0;

    TEST_ASSERT_EQUAL(OVERFLOW, addition(INT_MAX, 1, &ans));

    TEST_ASSERT_EQUAL(OVERFLOW, subtraction(INT_MAX, 1 ,&ans));

    TEST_ASSERT_EQUAL(OVERFLOW, multiplication(INT_MAX, 1 ,&ans));

    TEST_ASSERT_EQUAL(OVERFLOW, division(INT_MAX, 1,&ans));

    TEST_ASSERT_EQUAL(OVERFLOW, modulus(INT_MAX, 1 ,&ans));

    TEST_ASSERT_EQUAL(OVERFLOW, power(INT_MAX, 1 ,&ans));
}

void automated_underflow_operations()
{
   int ex_ans= 0;
    int ans=0;

    TEST_ASSERT_EQUAL(UNDERFLOW, addition(INT_MIN, -1, &ans));

    TEST_ASSERT_EQUAL(UNDERFLOW, subtraction(INT_MIN, -1 ,&ans));

    TEST_ASSERT_EQUAL(UNDERFLOW, multiplication(INT_MIN, -1 ,&ans));

    TEST_ASSERT_EQUAL(UNDERFLOW, division(INT_MIN, -1,&ans));
    
    TEST_ASSERT_EQUAL(UNDERFLOW, modulus(INT_MIN, -1 ,&ans));

    TEST_ASSERT_EQUAL(UNDERFLOW, power(INT_MIN, -1 ,&ans));
}

int main(void)
{
    UnityBegin(NULL);

    RUN_TEST(automated_success_operations);
    RUN_TEST(automated_overflow_operations); 
    RUN_TEST(automated_underflow_operations);

    return (UnityEnd());
}