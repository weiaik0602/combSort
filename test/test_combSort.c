#include "unity.h"
#include "combSort.h"
#include <stdio.h>

void setUp(void)
{
}

void tearDown(void)
{
}

void test_combSort_NeedToImplement(void)
{
   int a[] = {8, 4, 1, 56, 3, -44, 23, -6, 28, 0};
   int n=(sizeof(a))/(sizeof(int));
   int testans[]={-44,-6,0,1,3,4,8,23,28,56};
   combSort(a,n);
   TEST_ASSERT_EQUAL_INT_ARRAY(testans,a,n);
}
