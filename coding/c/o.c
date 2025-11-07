#include <stdio.h>
/*int main()
{
    // 1. ***POINTER***
    /*
    int a;
     int *b = &a;
     printf("Enter the value of a ");
     scanf("%d", &a);

     printf("Address of a = %p\n", b);
     printf("Value at Address = %d\n", *b);
     */

// 2. ADDRESS TO ADDRESS
// Pointer to Pointer
/*int a;
int *b = &a;
printf("Enter the value of a ");
scanf("%d", &a);

int **k = &b;

printf("Address of a = %p\n", k);
printf("Address of b = %p\n", *k);
printf("value at address = %d\n", **k);*/

// 3. ARRAY POINTER
/*int a[5] = {5, 6, 9, 2, 1};
int *b[5];
int i;
for (i = 0; i < 5; i++)
{
    b[i] = &a[i];
}
printf("\nAddress of a\tValue at Address\n");
for (i = 0; i < 5; i++)
{
    printf("%p\t", b[i]);
    printf("%d\n", *b[i]);
}
return 0;}
 */

// 4. STRUCTURE (POINTER = TO FIND ADDRESS OF A VALUE )
/*struct employee
{
    int emp_no;
    char emp_name[20];
    char emp_desg[20];
    char emp_dept[20];
    int salary;
};
int main()
{
    struct employee *b;

    struct employee e1;
    printf("Enter employee number ");
    scanf("%d", &e1.emp_no);
    printf("Enter employee name ");
    scanf("%s", &e1.emp_name);
    printf("Enter designation ");
    scanf("%s", &e1.emp_desg);
    printf("Enter department ");
    scanf("%s", &e1.emp_dept);
    printf("Enter salary ");
    scanf("%d", &e1.salary);

    b = &e1;

    printf("\nAddress (Emp number) = %p\n", b->emp_no);
    printf("Emp no = %d\n", b->emp_no);
    printf("Address (Emp name) = %p\n", b->emp_no);
    printf("Emp name = %s\n", b->emp_name);
    printf("Address (Emp Desg) = %p\n", b->emp_no);
    printf("Emp desg = %s\n", b->emp_desg);
    printf("Address (Emp Dept) = %p\n", b->emp_no);
    printf("Emp dept = %s\n", b->emp_dept);
    printf("Address (Emp salary) = %p\n", b->emp_no);
    printf("Emp salary = %d\n", b->salary);

    return 0;
}*/

// 5. FUNCTION (POINTER)
void sum()
{
    int a, b;
    printf("Enter value of a ");
    scanf("%d", &a);
    printf("Enter value of b ");
    scanf("%d", &b);
    int sum = a + b;
    printf("Sum = %d\n", sum);
    printf("Address = %p\n", b);
    printf("Value at address = %d\n", (a));
    printf("Value at address = %d\n", (b));
}
int main()
{
    // sum();
    void (*b)() = &sum;
    (*b)();
    return 0;
}
