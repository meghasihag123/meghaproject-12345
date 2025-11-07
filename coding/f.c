#include <stdio.h>
int main()
{
    // 1. ***WHILE LOOP***
    /* int i;
     i=20;
     while(i<=10)
     {
         i++;
         printf("%d\n",i);
     }*/

    // 2. ***DO WHILE LOOP***
    /*int i;
    i = 20;
    do
    {
        i++;
        printf("%d\n", i);
    } while (i >= 25);*/

    // 2.1.  DO-WHILE (SUM/MINUS/DIVIDE/MULTIPLY)
    /*char ch;
    do
    {
        int choice;
        printf("Welcome to my computer\n");
        printf("Enter 1 for multiply\n");
        printf("Enter 2 for divide\n");
        printf("Enter 3 for sum\n");
        printf("Enter 4 for minus\n");

        printf("Enter your choice ");
        scanf("%d", &choice);

        int a, b;
        printf("Enter the value of a : ");
        scanf("%d", &a);
        printf("Enter the value of b : ");
        scanf("%d", &b);

        switch (choice)
        {
        case 1:
            printf("Multiply = %d\n", a * b);
            break;
        case 2:
            printf("divide = %d\n", a / b);
            break;
        case 3:
            printf("sum = %d\n", a + b);
            break;
        case 4:
            printf("minus = %d\n", a - b);
            break;
        default:
            printf("Invalid choice\n");
        }
        printf("Do you want to continue ");
        scanf("%s", &ch);

    } while (ch == 'y' || ch == 'Y');*/

    // 3. REVERSE OF A NUMBER
    /*int r, a, p = 0;
    // prompt user for input
    printf("Enter the number ");
    scanf("%d", &a);
    while (a != 0)

    {

        r = a % 10;
        p = p * 10 + r;
        a /= 10;
       printf(" reverse = %d", p); // repeatition of numbers occur
    }
    printf(" reverse = %d", p); // no repeatition
    */

    // 4. PALINDROME NUMBER
    /*int n, r, original, p = 0;
    // prompt user for input
    printf("Enter the number ");
    scanf("%d", &n);
    original = n;
    while (n != 0)
    {
        r = n % 10;
        p = p * 10 + r;
        n /= 10;
    }
    printf("p(reverse) = %d\n", p);
    if (original == p)
    {
        printf("%d is a palindrome number \n", original);
    }
    else
    {
        printf("%d is not a palindrome number ", original);
    }*/

    // 5. ARMSTRONG NUMBER
    /*int a, r, original, s = 0;
    printf("Enter the number ");
    scanf("%d", &a);
    original = a;
    while (original != 0)
    {

        // remainder contains the last digit
        r = original % 10;
        s = s + r * r * r;
        // removing last digit from the orignal number
        original /= 10;
    }
    if (s == a)
    {
        printf("%d is an Armstrong number\n", a);
    }
    else
    {
        printf("%d is not an Armstrong number ", a);
    }*/

    return 0;
}