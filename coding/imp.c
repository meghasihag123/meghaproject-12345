#include<stdio.h>
#include <calc.h>
#include <cal.h>
#include <div.h>
#include <multi.h>
int main()
{
   int k = sum(23, 78);
   printf("sum = %d\n", k);

   int j = minus(90, 9);
   printf("minus = %d\n", j);

   float l = divide(2, 3);
   printf("divide = %.3f\n", l);

   int m = multi(3, 5);
   printf("mutiply = %d", m);
   return 0;
}