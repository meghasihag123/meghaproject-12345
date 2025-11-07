#include <stdio.h>
int main()
{
    //...CHARACTER ARRAY...//Collection of character = Character Array/String
    // 1. PRINT NAME(WITHOUT SPACE)
    /*char name[20];
    printf("Enter name ");
    scanf("%s", &name);

    printf("name = %s", name);*/

    // 2. PRINT NAME( WITH SPACE)
    /* char name[20];
     printf("Enter name ");

     fgets(name, 20, stdin);
     printf("name with space = %s", name);*/

    // 3. STRING LENGTH
    /* char name[20];
     printf("Enter character ");
     scanf("%s", &name);
     int i, c = 0;
     for (i = 0; name[i] != '\0'; i++)
     {
         c++;
     }
     printf("string length = %d", i);*/

    // 4.
    // a.(display whether vowel or not )
    /* char i, name[20];
     printf("Enter letter ");
     scanf("%s", &name);
     if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u' || name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U')
     {
         printf("vowel");
     }
     else
     {
         printf("consonant");
     }*/
    // b.(COUNT VOWEL IN A NAME)
    /* char i, name[20];
     printf("Enter name ");
     scanf("%s", &name);
     char c = 0;
     for (i = 0; i < 20; i++)
         if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u' || name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U')
         {
             c++;
         }
     printf("count vowel = %d", c);*/

    // 5. COUNT PUNCTUATION IN A NAME
    // a. punctuation or not
    /* char i, name[20];
     printf("Enter name ");
     scanf("%s", &name);
     if (name[i] == '!' || name[i] == '@' || name[i] == '#' || name[i] == '$' || name[i] == '%' || name[i] == '^' || name[i] == '&' || name[i] == '*')
     {
         printf("punctuation ");
     }
     else
     {
         printf("not punctuation ");
     }*/

    // b. COUNT PUNCTUATION
    /* char i, name[20];
     printf("Enter name ");
     scanf("%s", &name);
     char c = 0;
     for (i = 0; name[i] != '\0'; i++)

         if (name[i] == '!' || name[i] == '@' || name[i] == '#' || name[i] == '$' || name[i] == '%' || name[i] == '^' || name[i] == '&' || name[i] == '*')
         {
             c++;
         }
     printf(" count punctuation = %d", c);*/

    // 6.  LOWECASE OR NOT
    /*  char name[20];
      printf("Enter character ");
      scanf("%s", &name);
      char i;
      if (name[i] >= 'a' && name[i] <= 'z')
      {
          printf("lowercase ");
      }
      else
      {
          printf("not lowercase");
      }*/

    // 6.6 UPPERCASE OR NOT
    /*char name[20];
    printf("Enter character ");
    scanf("%s", &name);
    char i;
    if (name[i] >= 'A' && name[i] <= 'Z')

    {
            printf("UPPERcase ");
    }
    else
    {
            printf("not UPPERcase");
    }*/
    // 7. LOWERCASE/UPPERCASE/DIGIT/SPECIAL CHARACTER
    /* char ch[20];
     char i;
     printf("Enter character ");
     scanf("%s", &ch);
 if (ch[i] >= 'a' && ch[i] <= 'z')
     {
         printf("lowercase");
     }
     else if (ch[i] >= 'A' && ch[i] <= 'Z')
     {
         printf("uppercase");
     }
 else if (ch[i] >= '0' && ch[i] <= '9')
     {
         printf("Digit");
     }
     else
     {
         printf("Special character");
     }
         */

    // 8. TOGGLE CASE (CHANGE LOWERCASE TO UPPERCASE AND VICE-VERSA)
    // 1. UPPER TO LOWERCASE OF ONE LETTER
    /* char name[20];
     printf("ENTER THE STRING ");
     scanf("%s", &name);
     char i;
     if (name[i] >= 'A' && name[i] <= 'Z')
     {
         name[i] = name[i] + 32;
     }
     printf("LOWERCASE = %s", name);*/

    // 1.1. LOWER TO UPPERCASE OF ONE LETTER
    /* char name[20];
     printf("ENTER STRING ");
     scanf("%s", &name);
     char i;
     if (name[i] >= 'a' && name[i] <= 'z')
     {
         name[i] = name[i] - 32;
     }
     printf("UPPERCASE = %s", name);*/

    // 2. UPPERCASE OF A WORD
    /* char name[20];
     printf("ENTER THE STRING ");
     scanf("%s", &name);
     char i;
     for (i = 0; name[i] != '\0'; i++)
         if (name[i] >= 'a' && name[i] <= 'z')
         {
             name[i] = name[i] - 32;
         }
     printf("%s", name);*/

    // 2.2. LOWERCASE OF A WORD
    /*char name[20];
    printf("ENTER THE STRING ");
    scanf("%s", &name);
    char i;
    for (i = 0; name[i] != '\0'; i++)
        if (name[i] >= 'A' && name[i] <= 'Z')
        {
            name[i] = name[i] + 32;
        }
    printf("%s", name);*/

    // 3. CHANGE CASE IN A WORD (BOTH LOWER AND UPPERCASE)
    /*  char name[20];
      printf("ENTER THE STRING ");
      scanf("%s", &name);
      char i;
      for (i = 0; name[i] != '\0'; i++)
          if (name[i] >= 'A' && name[i] <= 'Z')
          {
              name[i] = name[i] + 32;
          }
          else if (name[i] >= 'a' && name[i] <= 'z')
          {
              name[i] = name[i] - 32;
          }
      printf(" %s ", name);*/

    return 0;
}