#include <stdio.h>
int main()
{
    // ...CHARACTER ARRAY...
    // 1. DUPLICATE CHARACTER
    /* char name[6];
     printf("Enter string ");
     int i;
     scanf("%s", &name);
     int j;
     for (i = 0; i < 6; i++)
     {
         for (j = i + 1; j < 6; j++)
         {
             if (name[i] == name[j])
             {
                 printf("duplicate character %c\n", name[i]);
             }
         }
     }*/

    // 2. CHARACTER FREQUENCY
    /* char a[10], b[10], c;
     printf("Enter string ");
     int i, j;
     scanf("%s", &a);

     for (i = 0; a[i] != '\0'; i++)
     {
         int c = 1;
         for (j = i + 1; a[j] != '\0'; j++)
         {
             if (a[i] == a[j])
             {
                 c++;
                 a[j] = -1;
             }
         }
         b[i] = c;
     }
     for (i = 0; a[i] != '\0'; i++)
         if (a[i] != -1)
         {
             printf("duplicate %c\t", a[i]);
             printf("dup count %d\n", b[i]);
         }*/

    // 3. SEARCH CHARACTER (CHARACTER INDEX )
    /*char i, choice, num[6];
    printf("Enter character\n");
    for (i = 0; i <= 5; i++)
    {
        scanf("%s", &num[i]);
    }
    printf("Enter choice ");
    scanf("%s", &choice);
    for (i = 0; i <= 5; i++)
        if (num[i] == choice)
        {
            printf(" character =  %c\t", num[i]);
            printf(" index = %d\n", i);
        }*/

    // 4. REMOVE CHARACTER
    /* char i, j, ch, a[20];
     printf("Enter characters\n");
     scanf("%s", &a);

     printf("Enter character you want to remove ");
     scanf("%s", &ch);
     for (i = 0; a[i] != '\0'; i++)
     {
         if (a[i] == ch)
         {
             // Shift elements to the left
             for (j = i; a[j] != '\0'; j++)
             {
                 a[j] = a[j + 1];
             }
             a[20] = 0; // Optional: Clear last element
             break;     // Remove only first occurrence
         }
     }
     for (i = 0; a[i] != '\0'; i++)
     {
         printf("%c", a[i]);
     }*/

    // 5. LEFT ROTATION
   /* char i, a[10], f; // ARRAY SIZE
    printf("Enter name\n");
    scanf("%s", &a);

    int c = 0;
    for (i = 0; a[i] != '\0'; i++)
    {
        c++;
    }
    printf("strlen %d\n", c);

    f = a[0];
    for (i = 0; a[i] != '\0'; i++)
    {
        a[i] = a[i + 1];
    }
    a[c - 1] = f;

    for (i = 0; a[i] != '\0'; i++)
    {
        printf("%c", a[i]);
    }*/

    // LEFT ROTATION (USER INPUT)
     char a[20], i;
     printf("Enter name ");
     scanf("%s", &a);
     int c = 0;
     for (i = 0; a[i] != '\0'; i++)
     {
         c++;
     }
     printf("strlen %d\n", c);

     int choice;
     printf("How many character you want to rotate ");
     scanf("%d", &choice);

     int f, j;
     for (j = 1; j < choice; j++)
     {
         f = a[0];
         for (i = 0; i < c; i++)
         {
             a[i] = a[i + 1];
         }
         a[c - 1] = f;
     }

     for (i = 0; i < c; i++)
     {
         printf("%c", a[i]);
     }

    // 6. RIGHT ROTATION (RIGHT TO LEFT ROTATE )
    /* char i, j, a[5], f;
     printf("Enter character\n");
     scanf("%s", &a[i]);

     f = a[4];
         for (i = 4; i >= 1; i--)
         {
             a[i] = a[i - 1];
         }
         a[0] = f;

     for (i = 0; i <= 4; i++)
     {
         printf("%c", a[i]);
     }*/
    // RIGHT ROTATION (USER INPUT)
    /* char i, j, a[5], f, c;
     printf("Enter characters\n");
     scanf("%s", &a[i]);

     printf("how many characters you want to rotate ");
     scanf("%d", &c);
     for (j = 1; j <= c; j++)
     {
         f = a[4];
         for (i = 4; i >= 0; i--)
         {
             a[i] = a[i - 1];
         }
         a[0] = f;
     }

     for (i = 0; i <= 4; i++)
     {
         printf("%c", a[i]);
     }*/

    // 7. PARTS OF A STRING
    /* char name[15];
     printf("Enter name ");
     scanf("%s", &name);
     printf("name = %s\n", name);

     int i, c = 0;
     for (i = 0; name[i] != '\0'; i++)
     {
             c++;
     }
     printf("stringlength = %d\n", c);

     int choice;
     printf("Enter your choice ");
     scanf("%d", &choice);
     int l;

     if (c % choice != 0)
     {
             printf("division is not posible");
     }
     else
     {
             printf("division is possible\n");

             l = c / choice;
             for (i = 0; i < choice; i++)
             {
                     // printf("%d", i + 1);
                     int j;
                     for (j = 0; j < l; j++)
                     {
                             printf("%c", name[i * l + j]);
                     }
                     printf("\n");
             }
     }*/

    // 8. SUBSTRING
    /* char a[20];
     printf("Enter string ");
     scanf("%s", &a);

     int i, j, k, c;
     for (i = 0; a[i] != '\0'; i++)
     {
         c++;
     }
     printf(" stringlen = %d\n", c);

     for (k = 0; k < c; k++)
     {
         for (i = k; i < c; i++)
         {
             for (j = k; j <= i; j++)
             {

                 printf("%c", a[j]);
             }
             printf("\n");
         }
     }*/
    
     // 9. ASENDING ORDER (CHARACTERS)
        /*  char a[20];
          printf("Enter name ");
          scanf("%s", &a);
          int i, j, k, c = 0;
          for (i = 0; a[i] != '\0'; i++)
          {
                  c++;
          }
          printf("strlen %d\n", c);

          for (i = 0; i < c; i++)
          {
                  for (j = i + 1; j < c; j++)
                  {
                          if (a[i] > a[j])
                          {
                                  k = a[i];
                                  a[i] = a[j];
                                  a[j] = k;
                          }
                  }
          }
          for (i = 0; i < c; i++)
          {
                  printf("%c", a[i]);
          }*/

        // 10. ARRANGE CHARACTER LOWER UPPER(SAME CHARACTER)(Assignment)

        char a[10];
        printf("Enter name ");
        scanf("%s", &a);
        int i, j, k, c = 0;
        for (i = 0; a[i] != '\0'; i++)
        {
                c++;
        }
        printf("strlen %d\n", c);

        for (i = 0; i < c; i++)
        {
                for (j = i + 1; j < c; j++)
                {
                        if (a[i] > a[j])
                        {
                                k = a[i];
                                a[i] = a[j];
                                a[j] = k;
                        }
                }
        }
        for (i = 0; i < c; i++)
        {
                printf("%c", a[i]);
        }


    return 0;
}