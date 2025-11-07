#include <stdio.h>
int main()
{
    // ...NESTED LOOP...
    // 1. ***STAR PATTERN***
    /*int i, j, rows, cols;
    printf("Enter rows    ");
    scanf("%d", &rows);
    printf("Enter columns ");
    scanf("%d", &cols);

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= cols; j++)
        {
            printf("*");
        }
        printf("\n");
    }*/

    // 2. NUMBER PATTERN
    /*int i, j, rows,cols;
        printf("Enter rows    ");
        scanf("%d", &rows);
        printf("Enter columns ");
        scanf("%d", &cols);

        for (i = 1; i <= rows; i++)
        {
                for (j = 1; j <= cols; j++)
                {
                        printf("%d", i);
                }
                printf("\n");
        }*/
    //  3.
    /*int i, j, rows,cols;
    printf("Enter rows    ");
    scanf("%d", &rows);
    printf("Enter columns ");
    scanf("%d",&cols);
    for (i = 1; i <= rows; i++)
    {
            for (j = 1; j <= cols; j++)
            {
                    printf("%d", j);
            }
            printf("\n");
    }*/
    // 4.
    /* int i, j, rows, cols, k = 1;
     printf("Enter rows    ");
     scanf("%d", &rows);
     printf("Enter columns ");
     scanf("%d", &cols);
     for (i = 1; i <= rows - 1; i++) // rows=4
     {
         for (j = 1; j <= cols; j++) // cols=5
         {
             printf("%d\t", k);
             k++;
         }
         printf("\n");
     }*/
    // ...STAR PATTERN... (HALF PYRAMID)
    // 1.
    /* int i, j, rows;
     printf("Enter rows ");
     scanf("%d", &rows);
     for (i = 1; i <= rows; i++)
     {
         for (j = 1; j <= i; j++)
         {
             printf("*");
         }
         printf("\n");
     }*/

    // 2. SQUARE STAR PATTERN
    /* int i, j,rows;
     for (i = 1; i <= 5; i++)
     {
         for (j = 1; j <= 5; j++)
         {
             if (i == 1 || i == 5 || j == 1 || j == 5)
             {

                 printf("*");
             }
             else
             {
                 printf(" ");
             }
         }
         printf("\n");
     }*/

    // USER INPUT
   /* int i, j, rows, cols;
    printf("Enter rows    ");
    scanf("%d", &rows);
    printf("Enter columns ");
    scanf("%d", &cols);
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= cols; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == cols)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }*/

    // 1. NUMBER PATTERN (HALF PYRAMID)
    /* int i, j,rows;
     printf("Enter rows ");
     scanf("%d",&rows);
     for (i = 1; i <= rows; i++)
     {
         for (j = 1; j <= i; j++)
         {
             printf("%d", j);
         }
         printf("\n");
     }*/
    
    //  2...
    /*int i, j,rows;
    printf("Enter rows ");
    scanf("%d",&rows);
       for (i= 1; i <= rows; i++)
       {
           for (j = 1; j <= i; j++)
           {
               printf("%d",i);
           }
           printf("\n");
       }*/

    /* 3...
     int i, j, k = 1, rows;
     printf("Enter rows ");
     scanf("%d", &rows);
     for (i = 1; i <= rows; i++)
     {
         for (j = 1; j <= i; j += 1)
         {
             printf("%d\t", k);
             k++;
         }
         printf("\n");
     }*/

    // 5...
    // TABLE (3-5) (NESTED LOOP)
    /* int i;
     int t;
     int j;
     for (i = 1; i <= 10; i++)
     {
         for (j = 3; j <= 10; j++)
         {
            // printf("%d\t", t);
             t = j * i;
             printf("%d\t", t);
         }
         printf("\n");
     }*/
    // 6...
    // TABLE  (2-5)
    /* int i,j,t;
       for (i = 1; i <= 10; i++)
       {
           for (j = 2; j <= 5; j++)
           {
              // printf("%d\t", t);
               t = j * i;
               printf("%d\t", t);
           }
           printf("\n");
       }*/

    return 0;
}