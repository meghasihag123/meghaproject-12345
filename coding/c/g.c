#include <stdio.h>
int main()
{ // ... ARRAY...
    // A. PRINT MARKS
    /* int i;
     int marks[5];//ARRAY SIZE
     printf("Enter marks \n");
     for (i = 0; i <= 4; i++)
     {
         scanf("%d", &marks[i]);
     }
     for (i = 0; i <= 4; i++)
     {
         printf(" marks =  %d\n", marks[i]);
     }*/

    // B.  FIND INDEX
    /* int i;
     int marks[5];
     printf("Enter marks \n");
     for (i = 0; i <= 4; i++)
     {
         scanf("%d", &marks[i]);
     }
     printf(" value at index %d", marks[2]);*/

    // C. INDEX NUMBER AND POSITION
    /* int i;
     int marks[5];
     printf("Enter marks \n");
     for (i = 0; i <= 4; i++)
     {
         scanf("%d", &marks[i]);
     }
     for (i = 0; i <= 4; i++)
     {
         printf(" marks =  %d\t", marks[i]);
         printf(" index = %d\t", i);
         printf(" position = %d\n", i + 1);
     }*/

    // AGAIN (MARKS,INDEX,POSITION)
    /* int marks[5];
   printf("Enter the marks\n");
   int i;
   for (i = 0; i < 5; i++)
   {
       scanf("%d", &marks[i]);
   }
   printf("\nmarks\tindex\tposition\n");
   for (i = 0; i < 5; i++)
   {
       printf("%d\t", marks[i]);
       printf("%d\t", i);
       printf("%d\n", i + 1);
   }*/

    // D. SUM OF GIVEN NUMBERS
    /* int i, num[5];
     int sum = 0;
     printf("Enter numbers\n");
     for (i = 0; i <= 4; i++)
     {
         scanf("%d", &num[i]);
     }
     for (i = 0; i <= 4; i++)
     {
         printf("numbers = %d\n",num [i]);
         sum = sum +num [i];
     }
     printf(" sum = %d\t", sum);*/
    // AGAIN (SUM)
    /*int num[20];
   printf("Enter the number\n");
   int i;
   for (i = 0; i < 8; i++)
   {
       scanf("%d", &num[i]);
   }
   printf("\nNumbers\n");
   int sum = 0;
   for (i = 0; i < 8; i++)
   {
       printf("%d\n", num[i]);
       sum = sum + num[i];
   }
   printf("sum = %d", sum);*/

    // E. EVEN NUMBER,INDEX,POSITION,SUM,COUNT EVEN NUMBER
    /* int i, num[10];
     printf("Enter the numbers ");
     for (i = 0; i <= 9; i++)
     {
         scanf("%d", &num[i]);
     }
     int sum = 0;
     int b, count = 0;
     int sq;

     for (i = 0; i <= 9; i++)
         if (num[i] % 2 == 0)
         {
             count++;
             printf("even %d\t", num[i]);
             printf(" index %d\t", i);
             printf(" position %d\n", i + 1);
             sum = sum + num[i];
         }
     b = count;
     {
         printf(" even sum %d\t", sum);
         printf("Count even %d\t", b);
     }*/
    // COMPLETE (EVEN NUMBERS)
    /*int num[10];
    printf("Enter the number\n");
    int i;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("\nEven\tindex\tposition\tsquare\n");
    int count = 0;
    int sum = 0;
    int sq;
    for (i = 0; i < 10; i++)
        if (num[i] % 2 == 0)
        {
            printf("%d\t", num[i]);
            printf("%d\t", i);
            printf("%d\t", i + 1);
            count++;
            sum = sum + num[i];

            sq = num[i] * num[i];
            printf("\t%d\n", sq);
        }
    printf("even count %d\n", count);
    printf("even sum %d\n", sum);*/

    // IMPORTANT (COMBINE EVEN AND ODD)
    /* int num[10];
     printf("Enter the number\n");
     int i;
     for (i = 0; i < 10; i++)
     {
         scanf("%d", &num[i]);
     }
     printf("\nodd\tindex\tposition\tEven\tindex\tposition\n");
     int count = 0;
     int sum = 0;
     for (i = 0; i < 10; i++)
         if (num[i] % 2 == 0)
         {
             printf("\t%d\t", num[i]);
             printf("%d\t", i);
             printf("%d\n", i + 1);
             count++;
             sum = sum + num[i];
         }
         else
         {
             printf("%d\t", num[i]);
             printf("%d\t", i);
             printf("%d\t", i + 1);
         }
     printf("\n\neven count %d\n", count);
     printf("even sum %d", sum);*/

    // F. EVEN NUMBERS (SQUARE)
    /*int num[10];
    printf("Enter the numbers\n");
    int i;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("\nEven\tSquare\n");
    int sq;
    for (i = 0; i < 10; i++)
        if (num[i] % 2 == 0)
        {
            printf("%d\t", num[i]);
            sq = num[i] * num[i];
            printf("%d\n", sq);
        }*/

    // G. COMPLETE (ODD NUMBER,INDEX,POSITION,SUM,COUNT ODD,CUBE)
    /*int num[10];
    printf("Enter the numbers\n");
    int i;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("\nOdd\tindex\tposition\tcube\n");
    int count = 0;
    int sum = 0;
    int cube;
    for (i = 0; i < 10; i++)
        if (num[i] % 2 != 0)
        {
            printf("%d\t", num[i]);
            printf("%d\t", i);
            printf("%d\t", i + 1);
            count++;
            sum = sum + num[i];
            cube = num[i] * num[i] * num[i];
            printf("\t%d\n", cube);
        }
    printf("Odd count %d\n", count);
    printf("odd sum %d", sum);*/

    // H. ODD NUMBERS(CUBE)
    /*int i, num[10];
    printf("Enter numbers ");
    for (i = 1; i <= 9; i++)
    {
        scanf("%d", &num[i]);
    }
    int cube;
    printf("\nOdd\tCube\n");
    for (i = 1; i <= 9; i++)
        if (num[i] % 2 != 0)
        {
            printf("%d\t", num[i]);
            cube = num[i] * num[i] * num[i];
            printf("%d\n", cube);
        }*/

    // 1. MAXIMUM NO. (ARRAY)
   /* int i, g, marks[5];
    printf("Enter numbers\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    g = marks[0];
    for (i = 1; i < 5; i++)
    {
        if (g < marks[i])
        {
            g = marks[i];
            // printf("All max %d",g);//important
        }
    }
    printf("Maximum = %d", g);*/

    // 1.1. MINIMUM NO (ARRAY)
    /*int i, g, marks[5];
    printf("Enter numbers\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    g = marks[0];
    for (i = 1; i < 5; i++)
    {
        if (g > marks[i])
        {
            g = marks[i];
            //printf(" min no.%d",g)//important
        }
    }
    printf("Min number %d", g);*/

    // 2. ASCENDING ORDER (USING SWAPPING )
    /* int i, j, a[8], c;
     printf("Enter numbers\n");
     for (i = 0; i <= 7; i++)
     {
         scanf("%d", &a[i]);
     }
     for (i = 0; i <= 7; i++)
     {
         for (j = i + 1; j <= 7; j++)
         {
             if (a[i] > a[j])
             {
                 c = a[i];
                 a[i] = a[j];
                 a[j] = c;
             }
         }
     }
     printf("\nAscending order\n");
     for (i = 0; i <= 7; i++)
     {
         printf("  %d\n", a[i]);
     }*/
    // 2.2.DESCENDING ORDER (USING SWAPPING)
    /* int i, j, a[8], c;
     printf("Enter numbers\n");
     for (i = 0; i <= 7; i++)
     {
         scanf("%d", &a[i]);
     }
     for (i = 0; i <= 7; i++)
     {
         for (j = i + 1; j <= 7; j++)
         {
             if (a[i] < a[j])
             {
                 c = a[i];
                 a[i] = a[j];
                 a[j] = c;
             }
         }
     }
     for (i = 0; i <= 7; i++)
     {
         printf(" descending order %d\n", a[i]);
     }*/

    // 3.FIND DUPLICATE VALUES
     /*int i, j, a[5];
     printf("Enter numbers\n");
     for (i = 0; i <= 4; i++)
     {
         scanf("%d", &a[i]);
     }
         printf("\nDuplicate\n");
     {
         for (i = 0; i <= 4; i++)
         {
             for (j = i + 1; j <= 4; j++)
                 if (a[i] == a[j])
                 {
                     printf("%d\n", a[i]);
                 }
         }
     }*/
 
    return 0;
}