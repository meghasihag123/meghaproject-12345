#include <stdio.h>
int main()
{
        // How to print identity matrix
        /* int i, j, rows, cols, a[10][10];
         printf("Enter rows ");
         scanf("%d", &i);
         printf("Enter cols ");
         scanf("%d", &j);

         printf("Enter values in matrix\n");
         for (rows = 0; rows < i; rows++)
         {
             for (cols = 0; cols < j; cols++)
             {
                 scanf("%d", &a[rows][cols]);
             }
         }

         // Print the matrix
         for (rows = 0; rows < i; rows++)
         {
             for (cols = 0; cols < j; cols++)
             {
                 printf("%d\t", a[i][j]);
             }
             printf("\n");
         }

         int flag = 1;
         for (rows = 0; rows < i; rows++)
         {
             for (cols = 0; cols < j; cols++)
             {
                 if (a[rows][cols] != 0 && a[cols][rows] != 1)
                 {
                     printf("0");
                 }
                 else
                 {
                     printf("1");
                 }
             }
             printf("\n");
         }*/

        // 1. IDENTITY MATRIX (USER INPUT)
        /*int i, j, rows, cols, a[3][3], Flag = 0;
            printf("Enter the Matrix Elements\n");
            for (i = 0; i < 3; i++)
            {
                    for (j = 0; j < 3; j++)
                    {
                            scanf("%d", &a[i][j]);
                    }
            }
            // Print the matrix
            for (i = 0; i < 3; i++)
            {
                    for (j = 0; j < 3; j++)
                    {
                            printf("%d\t", a[i][j]);
                    }
                    printf("\n");
            }

            for (i = 0; i < 3; i++)
            {
                    for (j = 0; j < 3; j++)
                    {
                            if (i == j && a[i][j] != 1 || i != j && a[i][j] != 0) // LOGIC : DIAGONAL 0R NOT DIAGONAL
                            {
                                    Flag = 1;
                                    break;
                            }
                    }
            }
            if (Flag == 1)
            {
                    printf("  not Identity Matrix ");
            }
            else
            {
                    printf("  Identity Matrix ");
            }*/

        // 2. STARK MATRIX
        /* int i, j, rows, cols, a[3][3], Flag = 0;
             printf("Enter the Matrix Elements\n");
             for (i = 0; i < 3; i++)
             {
                     for (j = 0; j < 3; j++)
                     {
                             scanf("%d", &a[i][j]);
                     }
             }
             // Print the matrix
             for (i = 0; i < 3; i++)
             {
                     for (j = 0; j < 3; j++)
                     {
                             printf("%d\t", a[i][j]);
                     }
                     printf("\n");
             }

             for (i = 0; i < 3; i++)
             {
                     for (j = 0; j < 3; j++)
                     {
                             if (i == j && a[i][j] == 1 || i != j && a[i][j] != 0) // CHECK COLS/ROWS
                             {
                                     Flag = 1;
                                     break;
                             }
                     }
             }
             if (Flag == 1)
             {
                     printf("  not stark Matrix ");
             }
             else
             {
                     printf("  stark Matrix ");
             }*/
        // 3. TRANSPOSE OF MATRIX
        /* int i, j, rows, cols, a[3][3];
             printf("Enter the Matrix Elements\n");
             for (i = 0; i < 3; i++)
             {
                     for (j = 0; j < 3; j++)
                     {
                             scanf("%d", &a[i][j]);
                     }
             }
             // Print the matrix
             for (i = 0; i < 3; i++)
             {
                     for (j = 0; j < 3; j++)
                     {
                             printf("%d\t", a[i][j]);
                     }
                     printf("\n");
             }

             for (i = 0; i < 3; i++)
             {
                     for (j = 0; j < 3; j++)
                     {
                             printf("%d", a[j][i]);
                     }
                     printf("\n");
             }*/

        // TRANSPOSE MATRIX(2*3 INTO 3*2)
        /* int i, j, rows, cols, a[2][3];
         printf("Enter the Matrix Elements\n");
         for (i = 0; i < 2; i++)
         {
                 for (j = 0; j < 3; j++)
                 {
                         scanf("%d", &a[i][j]);
                 }
         }
         // Print the matrix
         for (i = 0; i < 2; i++)
         {
                 for (j = 0; j < 3; j++)
                 {
                         printf("%d\t", a[i][j]);
                 }
                 printf("\n");
         }

         for (i = 0; i < 3; i++)
         {
                 for (j = 0; j < 2; j++)
                 {
                         printf("%d\t", a[j][i]);
                 }
                 printf("\n");
         }*/

        // 4. MATRIX MULTIPLICATION
        /* int i, j, a[3][3], b[3][3], c[3][3];
         printf("Enter the Matrix a\n");
         for (i = 0; i < 3; i++)
         {
                 for (j = 0; j < 3; j++)
                 {
                         scanf("%d", &a[i][j]);
                 }
         }
         printf("Enter the Matrix b\n");
         for (i = 0; i < 3; i++)
         {
                 for (j = 0; j < 3; j++)
                 {
                         scanf("%d", &b[i][j]);
                 }
         }
         printf("matrix a elements\n");
         for (i = 0; i < 3; i++)
         {
                 for (j = 0; j < 3; j++)
                 {
                         printf("%d\t", a[i][j]);
                 }
                 printf("\n");
         }
         printf("matrix b elements\n");
         for (i = 0; i < 3; i++)
         {
                 for (j = 0; j < 3; j++)
                 {
                         printf("%d\t", b[i][j]);
                 }
                 printf("\n");
         }

         int k;
         for (i = 0; i < 3; i++)
         {
                 for (j = 0; j < 3; j++)
                 {
                         c[i][j] = 0;
                         for (k = 0; k < 3; k++)
                         {
                                 c[i][j] += a[i][k] * b[k][j]; // c[i][j]=c[i][j]+a[i][k]*b[k][j]
                         }
                 }
         }
         printf("\n multiply \n");
         for (i = 0; i < 3; i++)
         {
                 for (j = 0; j < 3; j++)
                 {
                         printf("%d\t", c[i][j]);
                 }
                 printf("\n");
         }*/

        return 0;
}