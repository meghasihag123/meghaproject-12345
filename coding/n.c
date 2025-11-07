#include <stdio.h>
// ***STRUCTURE***
// STRUCTURE = USER DEFIEND DATATYPE

// 1. INFORMATION OF A PERSON
/*struct employee
{
    int emp_no;
    char emp_name[20];
    char emp_Desg[20];
    char emp_Dept[20];
    int salary;
};
int main()
{
    struct employee e1;
    printf("Enter employee number ");
    scanf("%d", &e1.emp_no);
    printf("Enter employee name ");
    scanf("%s", &e1.emp_name);
    printf("Enter designation ");
    scanf("%s", &e1.emp_Desg);
    printf("Enter department ");
    scanf("%s", &e1.emp_Dept);
    printf("Enter the salary ");
    scanf("%d", &e1.salary);

    printf("\nEmployee Number  = %d\n", e1.emp_no);
    printf("Employee Name = %s\n", e1.emp_name);
    printf("Employee Designation = %s\n", e1.emp_Desg);
    printf("Employee Department = %s\n", e1.emp_Dept);
    printf("Employee Salary = %d\n", e1.salary);

    return 0;
}*/

// 2. INFORMATION OF FIVE PEOPLE (USING ARRAYS)
/*struct employee
{
    int emp_no;
    char emp_name[20];
    char emp_Desg[20];
    char emp_Dept[20];
    int salary;
};
int main()
{
    struct employee e1[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("\nEnter employee number ");
        scanf("%d", &e1[i].emp_no);
        printf("Enter employee name ");
        scanf("%s", &e1[i].emp_name);
        printf("Enter designation ");
        scanf("%s", &e1[i].emp_Desg);
        printf("Enter department ");
        scanf("%s", &e1[i].emp_Dept);
        printf("Enter the salary ");
        scanf("%d", &e1[i].salary);
    }
    printf("\nEmp no\tEmp name\tEmp Desg\tEmp dept\tEmp salary\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", e1[i].emp_no);
        printf("%s\t\t", e1[i].emp_name);
        printf("%s\t\t", e1[i].emp_Desg);
        printf("%s\t\t", e1[i].emp_Dept);
        printf("%d\t\n", e1[i].salary);
    }

    return 0;
}*/