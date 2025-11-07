#include <stdio.h>
int main()
{
    // 1. REVERSE OF STRING
    /* char name[20];
     char i, j, c;
     printf("Enter string ");
     scanf("%s", &name);
     c = 0;
     for (i = 0; name[i] != '\0'; i++)
     {
         c++;
     }
     printf("string length = %d\n", c);

     for (j = c - 1; j >= 0; j--)
     {

         printf("%c", name[j]);
     }*/

    // (IMPORTANT) STRINGS ARE EQUAL OR NOT
    /*char str1[20];
    char str2[20];
    printf("Enter the string1 ");
    scanf("%s", &str1);
    printf("Enter the string2 ");
    scanf("%s", &str2);

    int i;
    for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++)
    {
        if (str1[i] != str2[i])
        {
            printf("Strings are not equal ");
        }
        else
        {
            printf("strings are equal ");
        }
    }*/

    // 2. COMPARE STRINGS
    /* char str1[20], str2[20];
     printf("Enter str1 ");
     scanf("%s", &str1);
     printf("Enter str2 ");
     scanf("%s", &str2);

     char i;
     char flag = 0;
     for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++)
     {
             if (str1[i] != str2[i])
             {
                     flag = 1;
                     break;
             }
     }
     if (flag == 1)
     {
             printf("Strings are not equal ");
     }
     else
     {
             printf("strings are  equal");
     }*/

    // 3. COPY OF STRING
    /* char name1[20];
     char name2[20];
     printf("Enter the string ");
     scanf("%s", &name1);
     char i, j, k;
     char c = 0;
     for (i = 0; name1[i] != '\0'; i++)
     {
         c++;
     }
     printf("string length = %d\n", c);
     k = 0;
     for (j = 0; name1[j] != '\0'; j++)
     {
         name2[k] = name1[j];
         k++;
     }
     name2[k] = '\0';
     {
         printf("%s", name2);
     }*/

    // 4. CONCATENATE
    /* char s1[30];
     char s2[20];
     printf("Enter s1\n");
     scanf("%s", &s1);
     printf("Enter s2\n");
     scanf("%s", &s2);
     int i, c = 0;
     for (i = 0; s1[i] != '\0'; i++)
     {
         c++;
     }
     printf("length s1 = %d\n", c); // string1 length

     int j, k = 0;
     for (j = 0; s2[j] != '\0'; j++)
     {
         k++;
     }
     printf("length s2 = %d\n", k); // string2 length

     for (i = 0; i <= k; i++)
     {
         s1[c + i] = s2[i];
     }
     printf("concat = %s", s1);*/

    // 5. PALINDROME OF not
    /* char s1[20];
     printf("Enter string1 ");
     scanf("%s", &s1);

     int i, c = 0;
     for (i = 0; s1[i] != '\0'; i++)
     {
         c++;
     }
     printf("strlength = %d\n", c);

     int k = c - 1;
     int flag = 0;
     for (i = 0; i <= c / 2; i++)
     {
         if (s1[i] != s1[k])
         {
             flag = 1;
             break;
         }
         k--;
     }
     if (flag == 1)
     {
         printf(" not palindrome ");
     }
     else
     {
         printf(" palindrome ");
     }*/

    // 6. ANAGRAM OR NOT
    /*char a[10];
    char b[10], c1 = 0;
    printf("Enter string1 ");
    scanf("%s", &a);
    printf("Enter string2 ");
    scanf("%s", &b);
    int i, j;
    int c = 0;
    for (i = 0; a[i] != '\0'; i++)
    {
        c++;
    }
    printf("strlength = %d\n", c);

    for (i = 0; i < c; i++)
    {
        for (j = 0; j < c; j++)
        {

            if (a[i] == b[j])
            {
                c1++;
            }
        }
    }
    printf("%d", c1);
    if (c != c1)
    {
        printf("not anagram");
    }
    else
    {
        printf("anagram");
    }*/

    return 0;
}