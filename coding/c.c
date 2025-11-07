#include <stdio.h>
int main()
{
    // ....LOOPS....
    // 1. Name print
    /* int i;
     for (i = 1; i <= 10; i++)
     {
         printf("Name\n", i);
     }
     // 2.Print 1 to 10 and 10 to 1 counting
     /*int i;
         for (i = 1; i <= 10; i++)//Print 1-10
         {
             printf("%d\n", i);
         }*/
    /* int i;
       for(i=10;i>=1;i--)//Print 10-1
       {
        printf("%d\n",i);
       }*/
    // 3. SUM 1 TO 10 (LOOP)
    /* int i;
     int sum=0;
     for(i=1;i<=10;i++)
     {
       sum=sum+i;
     }
     printf("sum = %d\n",sum);*/
    // 4. COUNTING (LOOP)
    /* int i;
     int c = 0;
     for (i = 1; i <= 10; i++)
     {
         c++;
         printf("%d\n", i);
     }
     printf("count no %d\n", c);*/
    // 5. COUNT (EVEN)
    /* int i;
     int c = 0;
     for (i = 2; i <= 10; i += 2) // Odd number
     {
         printf("odd no %d\n", i);
         c++;
     }
     printf("count odd = %d", c);*/

    // 6. COUNT (ODD)
    /* int i;
     int c = 0;
     for (i = 1; i <= 10; i += 2) // Odd number
     {
         printf("odd no %d\n", i);
         c++;
     }
     printf("count odd = %d", c);*/

    // 7. EVEN UPTO 50
    /* int i;
     for (i = 2; i <= 50; i += 2) // Even number upto 50
     {
         printf(" even = %d\n", i);
     }*/
    // 8. SUM (EVEN) UPTO 50
    /* int i;
      int sum=0;
      for(i=2;i<=50;i+=2)
      {
          sum=sum+i;//EVEN SUM
      }
      printf("odd sum = %d",sum);*/
    // 9. SUM (ODD) UPTO 50
    /* int i;
     int sum=0;
     for(i=1;i<=50;i+=2)
     {
         sum=sum+i;//odd sum
     }
     printf("odd sum = %d",sum);*/
    // 10. COUNT (EVEN) AND SUM
    /* int i, c;
     int sum = 0;
     c = 0;
     for (i = 2; i <= 50; i += 2)
     {
         c++;
         printf("even %d\n", i);
         sum = sum + i; // Even no. total sum upto 50
     }
     printf(" Even sum = %d\n", sum);
     printf(" count even = %d", c);*/

    // 11. COUNT (ODD) AND SUM
    /* int i, c;
     int sum = 0;
     c = 0;
     for (i = 1; i <= 50; i += 2)
     {
         c++;
         printf(" odd %d\n", i);
         sum = sum + i; // odd no. total sum upto 50
     }
     printf(" ODD sum = %d", sum);
     printf(" counting odd = %d", c);*/

    // 12. Even number (square)
    /* int i;
     int sq;
     for (i = 2; i <= 10; i += 2)
     {
         printf(" Even no. = %d\t", i);
         sq = i * i;
         printf(" square = %d\n", sq);
     }*/
    // 13. odd number (Cube)
    /* int i;
     int sq;
     for (i = 1; i <= 10; i += 2)
     {
         printf(" odd no. = %d\t", i);
         sq = i * i * i;
         printf(" cube = %d\n", sq);
     }*/
    // 14. Table (User Inputing)
    /* int i, n, t;
     printf("Enter number ");
     scanf("%d", &n);
     for (i = 1; i <= 10; i++)
     {
         t = n * i;
         printf("%d\n", t);
     }*/
    // 15. Factorial of a number
    int i, n;
    printf("Enter number ");
    scanf("%d", &n);
    for (i = n - 1; i >= 1; i--)
    {
        n = n * i;
    }
    printf(" factorial = %d\n", n);
    // 16. Prime number
    /* int i;
     int n;
     printf("Enter the number ");
     scanf("%d", &n);
     for (i = 2; i < n; i++)
     {
         if (n % i == 0)
         {
             printf(" not prime\n ");
         }
     }*/
    // 16. Prime number
    /* int i, a;
     int flag = 0;
     printf("Enter the number ");
     scanf("%d", &a);
     for (i = 2; i < a; i++)
     {
         if (a % i == 0)
         {
             flag = 1;
             break;
         }
     }
     if (flag == 1)
     {
         printf("not prime no");
     }
     else
     {
         printf("prime no");
     }*/
    return 0;
}