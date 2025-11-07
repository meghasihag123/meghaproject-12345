#include <stdio.h>
int main()
{ //... ARRAYS...
  // A. LEFT ROTATION  ( RIGHT TO LEFT ROTATE)

    /*int i, a[5], f; // ARRAY SIZE
   printf("Enter numbers\n");
   for (i = 0; i < 5; i++)
   {
       scanf("%d", &a[i]);
   }
   {
       f = a[0];
       for (i = 0; i < 5; i++)
       {
           a[i] = a[i + 1];
       }
       a[4] = f;
   }
   for (i = 0; i < 5; i++)
   {
       printf("%d", a[i]);
   }*/

    // A.A. LEFT ROTATION (USER INPUTING)
    /*int i, a[5], f, n;
    printf("Enter numbers\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("how many numbers you want to rotate ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        f = a[0];
        for (i = 0; i < n; i++)
        {
            a[i] = a[i + 1];
        }
        a[n] = f;
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d", a[i]);
    }*/

    // B.RIGHT ROTATION (SWAPPING TWO NO.)
    /* int i, j, a[5], f;
     printf("Enter numbers\n");
     for (i = 0; i < 5; i++)
     {
         scanf("%d", &a[i]);
     }

         f = a[4];
         for (i = 4; i > 0; i--)
         {
             a[i] = a[i - 1];
         }
         a[0] = f;

     for (i = 0; i < 5; i++)
     {
         printf("%d", a[i]);
     }*/

    // B.B. RIGHT ROTATION (USER INPUTING)
    /* int i, j, a[5], f, c;
     printf("Enter numbers\n");
     for (i = 0; i < 5; i++)
     {
         scanf("%d", &a[i]);
     }
     printf("how many elements you want to rotate ");
     scanf("%d", &c);
     f = a[c];
     for (i = c; i > 0; i--)
     {
         a[i] = a[i - 1];
     }
     a[0] = f;

     for (i = 0; i < 5; i++)
     {
         printf("%d", a[i]);
     }*/

    // C. FIND 2ND MAXIMUM NUMBER
    // int i, j, g, h, a[6];
    // printf("Enter the number\n");
    // for (i = 0; i < 6; i++)
    // {
    //     scanf("%d", &a[i]);
    // }
    // g = a[0];
    // h = a[1];
    // for (i = 1; i < 6; i++)
    // {
    //     for (j = 1; j < 6; j++)
    //     {
    //         if (g < a[i])
    //         {
    //             if (h < a[j])
    //             {
    //                 h = a[j];
    //                 g = a[i];
    //             }
    //         }
    //     }
    // }
    // printf(" max %d\t", h);
    // printf(" max %d\t", g);
    // AGAIN

    // D. COUNT HOW MANY TIMES DUPLICATE REPEATED (FREQUENCY/DUPLICATE)
    /*int i, j, a[6], b[6];
    printf("Enter numbers\n");
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &a[i]);
    }
    int count;
    for (i = 0; i < 6; i++)
    {
        count = 1;
        for (j = i + 1; j < 6; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                a[j] = -1;
            }
        }
        b[i] = count;
    }
    for (i = 0; i < 6; i++)
        if (a[i] != -1)
        {
            printf(" duplicate = %d\t", a[i]);
            printf(" how many times duplicate repeated = %d\n", b[i]);
        }*/

    // E. ENTER NUMBER and CHECK INDEX(SEARCH NUMBER)
    /*int i, choice, a[6];
    printf("Enter numbers\n");
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter your choice ");
    scanf("%d", &choice);
    for (i = 0; i < 6; i++)
        if (a[i] == choice)
        {
            printf(" number =  %d\t", a[i]);
            printf(" index = %d\n", i);
        }*/

    // F. REMOVE ELEMENT(ARRAY)
    /*int i, j, s, a[5];
    printf("Enter numbers\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter element you want to remove ");
    scanf("%d", &s);
    for (i = 0; i < 5; i++)
    {
        if (a[i] == s)
        {
            // Shift elements to the left
            for (j = i; j < 5; j++)
            {
                a[j] = a[j + 1];
            }
            a[4] = 0; // Optional: Clear last element

            break; // Remove only first occurrence
        }
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d", a[i]);
    }*/

    // G. FIND MISSING ELEMENT (ARRAY)
    /*int i, n, a[4], m, k, sum;
    printf("Enter number of elements in array\n");
    for (i = 0; i <= 3; i++)
    {
        scanf("%d", &a[i]);
    }
    sum = 0;
    for (i = 0; i <= 3; i++)
    {
        // printf(" numbers %d\n", a[i]);
        sum = sum + a[i];
    }
    printf(" sum= %d\n", sum);

    printf("Enter size ");
    scanf("%d", &n);
    int b[n];
    {
        k = n * (n + 1) / 2;
        m = k - sum;
    }
    printf(" k= %d\t", k);
    printf("missing element = %d", m);*/

    return 0;
}
