#include <stdio.h>
int main()
{
    // ...STAR PATTERN...
    // 1.
    /*int i, j, rows;
    printf("Enter the rows ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }*/
    // 2.
    /* int i, j, rows, cols, space;
     printf("Enter  rows   ");
     scanf("%d", &rows);
     printf("Enter columns ");
     scanf("%d", &cols);

     for (i = 1; i <= rows; i++)
     {
         for (j = 1; j <= cols; j++)
         {
             if (i + j <= cols)
             {
                 printf(" ");
             }
             else
             {
                 printf("*");
             }
         }
         printf("\n");
     }*/
    // 2.1
    /*int i, j, rows, cols, space;
    printf("Enter the rows     ");
    scanf("%d", &rows);
    printf("Enter the columns ");
    scanf("%d", &cols);
    for (i = rows; i >= 1; i--)
    {
        for (j = 1; j <= cols; j++)
        {
            if (i + j <= cols)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }*/

    // 3.
    /*int i, j, rows, space;
    printf("Enter the rows ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (space = 1; space <= rows - i; space++)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }*/
    // 3.1
    /*int i, j, rows, space;
    printf("Enter the rows ");
    scanf("%d", &rows);
    for (i = rows; i >= 1; i--)
    {
        for (space = 1; space <= rows - i; space++)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }*/

    return 0;
}