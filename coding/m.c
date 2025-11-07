#include <stdio.h>
// 1. LOCAL VARIABLE
// can not use variable (a,b) outside of function definition
// Everytime you call  a function value stored at different address or memory
/*void sum()
{
    int a, b;
    printf("Enter the value of a ");
    scanf("%d", &a);
    printf("Enter the value of b ");
    scanf("%d", &b);
    printf("sum = %d\n", a + b);
}
// printf("%d",a+b); // can not do this

int main()
{
    sum(); // call
    sum(); // call
    sum(); // call
    // printf("%d",a); (a is undefined )
    return 0;
}*/
// 2. GLOBLE VARIABLE
// You can declare variable globally before main function
// and before definition of function

/*void sum();
//int a, b;
int main()
{
    sum();
    return 0;
}
int a,b;
void sum()
{
    printf("Enter the value of a ");
    scanf("%d", &a);
    printf("Enter the value of b ");
    scanf("%d", &b);
    printf("sum = %d\n", a + b);
}*/

// 2.1. GLOBLE VARIABLE
/*int a, b;
void sum()
{
    printf("Enter the value of a ");
    scanf("%d", &a);
    printf("Enter the value of b ");
    scanf("%d", &b);
    printf("sum = %d\n", a + b);
}
int main()
{
sum(); // calling
    return 0;
}*/

// 3. STATIC VARIABLE
// LESS STORAGE IS USED IN THIS VARIABLE
/*void  count()
{
    static int count = 0; // Declare static keyword
    count++;
    printf("count = %d\n", count);
}
int main()
{
    count(); // output : 1
    count(); // output : 2
    count(); // output : 3
    return 0;
}*/
