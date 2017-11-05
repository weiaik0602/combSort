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

   combSort(a,n);
   
       printf("%d" ,n);
}
