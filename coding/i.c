#include <stdio.h>
int main()
{   // ...TWO-DIMENSIONAL ARRAY...
    // 1.
    /* int i, j, a[3][3];
     printf("Enter the value ");
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
     }*/
    // 2. VALUES ,ROW ,COLUMN
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
         printf("\n");
     }*/
    // 3. SUM
    /* int i, j, a[3][3];
     printf("Enter the value ");
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
     int sum = 0;
     for (i = 0; i <= 2; i++)
     {
         for (j = 0; j <= 2; j++)
         {
             sum = sum + a[i][j];
         }
     }
     printf(" sum = %d", sum);*/

    // 4. EVEN (2D-ARRAY)
    /* int i, j, a[3][3];
     printf("Enter the value ");
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
         for (j = 0; j <= 2; j++)
         {
             if (a[i][j] % 2 == 0)
             {
                 printf("even %d\n", a[i][j]);
             }
         }
     }*/
    // 5. Even ,row (index) ,column (index)
    /* int i, j, a[3][3];
     printf("Enter the value ");
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
             printf("%d ", a[i][j]);
         }
         printf("\n");
     }
     printf("even\trow\tcol\n");
     for (i = 0; i <= 2; i++)
     {
         for (j = 0; j <= 2; j++)
             if (a[i][j] % 2 == 0)
             {
                 printf("%d\t%d\t%d\n", a[i][j], i, j);
             }
         printf("\n");
     }*/
    // 6. EVEN ,SUM,COUNT
   /* int i, j, a[3][3];
    printf("Enter the value ");
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
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    int sum = 0;
    int count = 0;
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            if (a[i][j] % 2 == 0)
            {
                printf("even %d\n", a[i][j]);
                count++;
                sum = sum + a[i][j];
            }
        }
    }
    printf("even sum %d\n", sum);
    printf("count even %d", count);*/
    // 7. EVEN (SQUARE)
    /* int i, j, a[3][3];
     printf("Enter the value ");
     for (i = 0; i <= 2; i++)
     {
         for (j = 0; j <= 2; j++)
         {
             scanf("%d", &a[i][j]);
         }
     }
     int sq;
     for (i = 0; i <= 2; i++)
     {
         for (j = 0; j <= 2; j++)
         {
             if (a[i][j] % 2 == 0)
             {
                 printf("even %d\t", a[i][j]);
                 sq = a[i][j] * a[i][j];
                 printf("square %d\n", sq);
             }
         }
     }*/
    // 8. ODD (2D-ARRAY)
    /*int i, j, a[3][3];
    printf("Enter the value ");
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
        for (j = 0; j <= 2; j++)
        {
            if (a[i][j] % 2 != 0)
            {
                printf("odd %d\n", a[i][j]);
            }
        }
    }*/
    // 9. ODD ,ROW (INDEX),COLUMN (INDEX)
    /* int i, j, a[3][3];
     printf("Enter the value ");
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
     printf("odd\trow\tcol\n");
     for (i = 0; i <= 2; i++)
     {
         for (j = 0; j <= 2; j++)
         {
             if (a[i][j] % 2 != 0)
             {
                 printf("%d\t%d\t%d\n", a[i][j], i, j);
             }
             printf("\n");
         }
     }*/
    // 10.ODD,SUM,COUNT
    /* int i, j, a[3][3];
     printf("Enter the value ");
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
     int c = 0, sum = 0;
     for (i = 0; i <= 2; i++)
     {
         for (j = 0; j <= 2; j++)
         {
             if (a[i][j] % 2 != 0)
             {
                 printf("odd %d\n", a[i][j]);
                 c++;
                 sum = sum + a[i][j];
             }
         }
     }
     printf("sum %d", sum);
     printf(" count odd %d", c);*/
    // 11. ODD (CUBE)
    /* int i, j, a[3][3];
     printf("Enter the value ");
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
     int cube;
     for (i = 0; i <= 2; i++)
     {
         for (j = 0; j <= 2; j++)
         {
             if (a[i][j] % 2 != 0)
             {
                 printf("odd %d\t", a[i][j]);
                 cube = a[i][j] * a[i][j] * a[i][j];
                 printf("ODD cube %d\n", cube);
             }
         }
     }*/

    return 0;
}