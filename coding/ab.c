#include <stdio.h>
int main()
{

    // 1...
    //  B. USE OF OPERATOR (||)
    /* char ch;
     printf("Enter character ");
     scanf("%c", &ch);
     if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
     {
         printf("Vowel");
     }
     else
     {
         printf("consonant");
     }*/
    // 2...
    /*char ch;
    printf("Enter character ");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
    {
        printf("Lower case");
    }
    else if(ch>='A'&&ch<='Z')
    {
        printf("Upper case ");
    }
    else if(ch>='0'&&ch<='9')
    {
        printf("Digit");
    }
    else{
        printf("Special character");
    }*/
    //  3... TOGGLE CASE(INTERCHANGE LOWERCASE AND UPPERCASE )
    // 1. Uppercase to lowercase(change)
    char ch;
    printf("Enter UPPERCASE ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
        printf("LOWERCASE = %c", ch);
    }
    // 11... Lower case to upper case(change)
    /* char ch;
    printf("Enter LOWERCASE ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
        printf("UPPERCASE = %c", ch);
    }*/
    // NESTED IF (IF WITHIN IF)
    // 4. NESTED IF(EVEN AND POSITIVE/NEGATIVE)
    // a...
    /* int a;
     printf("Enter the value of a ");
     scanf("%d", &a);//
     if (a > 0)
     {
         if (a % 2 == 0)
         {
             printf("Even and positive number");
         }
         else
         {
             printf("Odd and positive number");
         }
     }
     else
     {
         printf("negative");
     }*/
    // b... FIND HOURS,MINUTES,SECONDS(IF WITHIN IF)
    /* int hours, min, sec;
     printf("Enter the hours ");
     scanf("%d", &hours);
     printf("Enter the minutes ");
     scanf("%d", &min);
     printf("Enter the seconds ");
     scanf("%d", &sec);
     if (sec >= 60)
     {
         min++;
         sec -= 60;

         if (min >= 60)
         {
             hours++;
             min -= 60;
         }
     }
     printf(" hours = %d\n", hours);
     printf(" minutes = %d\n", min);
     printf(" sec = %d\n", sec);*/

    // NESTED IF(IF WITHIN IF)
    // c... program//Calculate marks
    /* int p1, p2, p3;
      printf("Enter p1 marks ");
      scanf("%d", &p1);
      printf("Enter p2 marks ");
      scanf("%d", &p2);
      printf("Enter p3 marks ");
      scanf("%d", &p3);
      if (p1 >= 65)
      {
          if (p2 >= 55)
          {
              if (p3 >= 50)
              {
                  if (p1 + p2 >= 110 || p1 + p2 + p3 >= 120)
                  {
                      printf("pass");
                  }
              }
          }
      }
      else
      {
          printf("fail");
      }*/

    // 5. SWITCH CASE(MULTIPLE CHOICE)(CONDITIONAL STATEMENTS)

    // VOWELS
    /* char ch;
     printf("Enter character ");
     scanf("%c", &ch);
     switch (ch)
     {
     case 'a':printf("vowel");
     break;
     case 'e':printf("vowel");
     break;
     case 'i':printf("vowel");
     break;
     case 'o':printf("vowel");
     break;
     case 'u':printf("vowel");
     break;
     case 'A':printf("vowel");
     break;
     case 'E':printf("vowel");
     break;
     case 'I':printf("vowel");
     break;
     case 'O':printf("vowel");
     break;
     case 'U':printf("vowel");
     break;
     default:printf("consonant");

     }*/
    // WEEKDAYS
    /*int a;
    printf("Enter choice ");
    scanf("%d",&a);
    switch (a)
    {
        case 1:printf("sunday");
        break;
        case 2:printf("monday");
        break;
        case 3:printf("tuesnday");
        break;
        case 4:printf("wednesday");
        break;
        case 5:printf("thursday");
        break;
        case 6:printf("friday");
        break;
        case 7:printf("saturday");
        break;
        default:printf("Invalid choice ");
    }*/

    // Calculation using Switch case
    /*
    int choice;
    printf("Enter 1 for addition ");
    printf("Enter 2 for multiplication ");
    printf("Enter 3 for subtraction ");
    printf("Enter 4 for division ");
    scanf("%d", &choice);

    int a, b;
    printf("Enter the value of a ");
    scanf("%d", &a);
    printf("Enter the value of b ");
    scanf("%d", &b);

    switch (choice)
    {
    case 1:
        printf(" addition = %d\n", a + b);
        break;
    case 2:
        printf(" multiplication = %d\n", a * b);
        break;
    case 3:
        printf(" subtraction = %d\n", a - b);
        break;
    case 4:
        printf(" division = %d\n", a / b);
        break;
    default:
        printf("Invalid choice ");
    }*/

    return 0;
}