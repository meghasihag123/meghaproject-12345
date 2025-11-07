#include <stdio.h>
// ...FUNCTION...
// 1. ADDITION
/*void sum(); // ( Declaration of function )
int main()
{
    sum(); // ( Calling / Use of function )
    return 0;
}
void sum() // ( Definition of function )
{
    int a, b;
    printf("Enter the value of a ");
    scanf("%d", &a);
    printf("Enter the value of b ");
    scanf("%d", &b);
    printf("sum %d", a + b);
}*/

// 2. SUM/MINUS/DIVIDE/MULTIPLY
/*void sum(); // DECLARATION
void minus();
void divide();
void multiply();
int main()
{
    sum(); // CALLING/USE
    minus();
    divide();
    multiply();
    return 0;
}
void sum() // DEFINITION
{
    int a, b;
    printf("Enter a ");
    scanf("%d", &a);
    printf("Enter b ");
    scanf("%d", &b);
    printf("sum %d\n", a+b);
}
void minus()
{
    int a, b;
    printf("Enter a ");
    scanf("%d", &a);
    printf("Enter b ");
    scanf("%d", &b);
    printf("minus %d\n", a-b);
}
void divide()
{
    float a, b;
    printf("Enter a ");
    scanf("%d", &a);
    printf("Enter b ");
    scanf("%d", &b);
    printf("divide %.3f\n", a/b);
}
void multiply()
{
    int a, b;
    printf("Enter a ");
    scanf("%d", &a);
    printf("Enter b ");
    scanf("%d", &b);
    printf("multiply %d\n", a*b);
}*/

// 3. SWITCH CASE
/*void sum(); // DECLARATION
void minus();
void divide();
void multiply();
int main()
{
    int choice;
    printf("Enter 1 for sum\n ");
    printf("Enter 2 for minus\n ");
    printf("Enter 3 for divide\n ");
    printf("Enter 4 for multiply\n ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        sum(); // CALLING / USE
        break;
    case 2:
        minus();
        break;
    case 3:
        divide();
        break;
    case 4:
        multiply();
        break;
        case 5:
        multiply();
        break;
    default:
        printf("Invalid choice");
    }
    return 0;
}
void sum() // DEFINITION
{
    int a, b;
    printf("Enter a ");
    scanf("%d", &a);
    printf("Enter b ");
    scanf("%d", &b);
    printf("sum %d\n", a + b);
}
void minus()
{
    int a, b;
    printf("Enter a ");
    scanf("%d", &a);
    printf("Enter b ");
    scanf("%d", &b);
    printf("minus %d\n", a - b);
}
void divide()
{
    float a, b;
    printf("Enter a ");
    scanf("%d", &a);
    printf("Enter b ");
    scanf("%d", &b);
    printf("divide %.3f\n", a / b);
}
void multiply()
{
    int a, b;
    printf("Enter a ");
    scanf("%d", &a);
    printf("Enter b ");
    scanf("%d", &b);
    printf("multiply %d\n", a * b);
}*/

// 4. DEFINATION AFTER FUNCTION DECLARATION(ADD/SUB/MUL/DIV)
/*void sum()
{
    int a, b;
    printf("Enter a ");
    scanf("%d", &a);
    printf("Enter b ");
    scanf("%d", &b);
    printf("sum %d\n", a + b);
}
void minus()
{
    int a, b;
    printf("Enter a ");
    scanf("%d", &a);
    printf("Enter b ");
    scanf("%d", &b);
    printf("minus %d\n", a - b);
}
void divide()
{
    float a, b;
    printf("Enter a ");
    scanf("%d", &a);
    printf("Enter b ");
    scanf("%d", &b);
    printf("divide %f\n", a / b);
}
void multiply()
{
    int a, b;
    printf("Enter a ");
    scanf("%d", &a);
    printf("Enter b ");
    scanf("%d", &b);
    printf("multiply %d\n", a * b);
}
int main()
{
    sum();
    minus();
    divide();
    multiply();
    return 0;
}*/
