#include <stdio.h>
int main()
{

    // SUM 1.
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

     int sum = 0;
     for (i = 0; i <= 2; i++)
     {
         for (j = 0; j <= i; j++)
         {
             printf("%d\t", a[i][j]);
             sum = sum + a[i][j];
         }
         printf("\n");
     }
     printf("sum %d", sum);*/
    // SUM 2.
    /* int i, j, a[3][3];
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
     int sum = 0;
     for (i = 0; i <= 2; i++)
     {
         for (j = i; j <= 2; j++)
         {

             printf("%d\t%d\t", i, j);
             sum = sum + a[i][j];
         }
         printf("\n");
     }
     printf("sum %d", sum);*/
    // 3. SUM OF TWO MATRIX
    /* int i, j, a[3][3], b[3][3], c[3][3];
     printf("Enter elements of matrix a ");
     for (i = 0; i <= 2; i++)
     {
         for (j = 0; j <= 2; j++)
         {
             scanf("%d", &a[i][j]);
         }
     }
     printf("Enter elements of matrix b ");
     for (i = 0; i <= 2; i++)
     {
         for (j = 0; j <= 2; j++)
         {
             scanf("%d", &b[i][j]);
         }
     }

     // Addition

     for (i = 0; i <= 2; i++)
     {
         for (j = 0; j <= 2; j++)
         {
             c[i][j] = a[i][j] + b[i][j];
         }
     }
     // PRINT RESULT
     for (i = 0; i <= 2; i++)
     {
         for (j = 0; j <= 2; j++)
         {
             printf(" sum %d\t", c[i][j]);
         }
         printf("\n");
     }
 */
    // 4. SUM OF TWO MATRIX(USER INPUTING )
    /*  int rows, cols;

      // Define the size of the matrices
     printf("Enter the number of rows ");
      scanf("%d", &rows);
      printf("Enter the number of columns ");
      scanf("%d", &cols);

      int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols];

      // Input elements of matrix1
      for (int i = 0; i < rows; i++)
      {
          for (int j = 0; j < cols; j++)
          {
              printf("Element [%d][%d] ", i, j);
              scanf("%d", &matrix1[i][j]);
          }
      }
// Input elements of matrix2
      for (int i = 0; i < rows; i++)
      {
          for (int j = 0; j < cols; j++)
          {
              printf("Element [%d][%d] ", i, j);
              scanf("%d", &matrix2[i][j]);
          }
      }
// Adding the two matrices
      for (int i = 0; i < rows; i++)
      {
          for (int j = 0; j < cols; j++)
          {
              sum[i][j] = matrix1[i][j] + matrix2[i][j];
          }
      }
// Display the result
      printf("Sum of the two matrices\n");
      for (int i = 0; i < rows; i++)
      {
          for (int j = 0; j < cols; j++)
          {
              printf("%d ", sum[i][j]);
          }
          printf("\n");
      }*/

    // 4. CHECK MATRICES ARE EQUAL OR NOT

   /* int i, j, a[3][3], b[3][3];
    printf("Enter elements of matrix a ");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of matrix b ");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    int flag=0;
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            if (a[i][j] != b[i][j])
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==1)
    {
        printf("not equal");
    }
            else
            {
                printf(" equal ");
            }*/
        
    
    return 0;
}