#include <stdio.h>
int main()
{
    /* int i, j, a[3][3];
     printf("Enter the values ");
     for (i = 0; i <= 2; i++)
     {
         for (j = 0; j <= 2; j++)
         {
             scanf("%d", &a[i][j]);
         }
     }
     printf("Value\trow\tcol\n");
     for (i = 0; i <= 2; i++)
     {
         for (j = 0; j <= 2; j++)
         {
             printf("%d\t%d\t%d\n", a[i][j], i, j);
         }
     }*/

    // value ,rowindex,colindex
    /* int i, j, a[3][3];
     printf("Enter values ");
     for (i = 0; i <= 2; i++)
     {
         for (j = 0; j <= 2; j++)
         {
             scanf("%d", &a[i][j]);
         }
     }
     printf("values\trow\tcol\n");
     for (i = 0; i <= 2; i++)
     {
         for (j = 0; j <= 2; j++)
         {
             printf("%d\t%d\t%d\n", a[i][j], i, j);
         }
     }*/
    // 1. SUM (ROWS) (individualy)
    /* int i, j, a[3][3], sum = 0;
     printf("Enter values ");
     for (i = 0; i <= 2; i++)
     {
         for (j = 0; j <= 2; j++)
         {
             scanf("%d", &a[i][j]);
         }
     }
     for (i = 0; i <= 2; i++)
     {
         for (j = 0; j <= 2; j++)
         {
             printf("%d\t", a[i][j]);
         }
         printf("\n");
     }

     for (i = 0, j = 0; j <= 2; j++)
     {
         sum = sum + a[i][j];
     }
     printf("row1 %d\t", sum);

     int sum1 = 0;
     for (i = 1, j = 0; j <= 2; j++)
     {
         sum1 = sum1 + a[i][j];
     }
     printf("\nrow2 %d\t", sum1);

     int sum2 = 0;
     for (i = 2, j = 0; j <= 2; j++)
     {
         sum2 = sum2 + a[i][j];
     }
     printf("\nrow3 %d\t", sum2);*/

    // SUM (COLUMNS)
    /* int i, j, a[3][3], row, sum = 0;
     printf("Enter values ");
     for (i = 0; i <= 2; i++)
     {
         for (j = 0; j <= 2; j++)
         {
             scanf("%d", &a[i][j]);
         }
     }
     for (i = 0; i <= 2; i++)
     {
         for (j = 0; j <= 2; j++)
         {
             printf("%d\t", a[i][j]);
         }
         printf("\n");
     }

     for (j = 0, i = 0; i <= 2; i++)
     {
         sum = sum + a[i][j];
     }
     printf(" col1 %d\t", sum);

     int sum1 = 0;
     for (j = 1, i = 0; i <= 2; i++)
     {
         sum1 = sum1 + a[i][j];
     }
     printf("\ncol2 %d\t", sum1);

     int sum2 = 0;
     for (j = 2, i = 0; i <= 2; i++)
     {
         sum2 = sum2 + a[i][j];
     }
     printf("\ncol3 %d\t", sum2);*/

    // 2. SUM (DIAGONAL) LEFT TO RIGHT
    /* int i, j, a[3][3], sum = 0;
     printf("Enter values ");
     for (i = 0; i <= 2; i++)
     {
         for (j = 0; j <= 2; j++)
         {
             scanf("%d", &a[i][j]);
         }
     }
     for (i = 0; i <= 2; i++)
     {
         for (j = 0; j <= 2; j++)
         {
             printf("%d\t", a[i][j]);
         }
         printf("\n");
     }
     for (i = 0; i <= 2; i++)
     {
         for (j = i; j <= i; j++)
         {
             sum = sum + a[i][j];
         }
     }
     printf(" %d\t", sum);*/

    // 3. SUM (DIAGONAL) RIGHT TO LEFT
    /* int i, j, a[3][3];
     printf("Enter the values ");
     for (i = 0; i <= 2; i++)
     {
         for (j = 0; j <= 2; j++)
         {
             scanf("%d", &a[i][j]);
         }
     }
     for (i = 0; i <= 2; i++)
     {
         for (j = 0; j <= 2; j++)
         {
             printf("%d\t", a[i][j]);
         }
         printf("\n");
     }

     // Size of the pattern
      int n;
      printf("Enter the size of the pattern: ");
      scanf("%d", &n);
      int sum = 0;
      for (i = 0; i < n; i++)
      {
          for (j = 0; j < n; j++)
          {
              if (j == n - i - 1)
              {
                  printf("%d", a[i][j]);
                   sum = sum + a[i][j];
              }
              else
              {
                  printf(" ");
              }
          }
          printf("\n");
      }
       printf("sum %d", sum);*/

    return 0;
}