#include <stdio.h>
// *****FILE HANDING*****(IN STUCTURE)
/*1.
* CREATE
* OPEN
* WRITE
* READ
* CLOSE
2. OUTPUT=INFORMATION STORED*/
// 1. EMPLOYEE RECORD ADD AND DISPLAY
struct employee
{
    int emp_no;
    char emp_name[20];
    char emp_desg[20];
    char emp_dept[20];
    int salary;
};
void display()
{
    // FOR DISPLAY THE RECORD
    FILE *f1;
    struct employee e1;

    f1 = fopen("emp1.txt", "r"); // FILE NAME
    while (fread(&e1, sizeof(e1), 1, f1) == 1)
    {
        printf("\nEmp no. = %d\n", e1.emp_no);
        printf("Emp name = %s\n", e1.emp_name);
        printf("Emp designation = %s\n", e1.emp_desg);
        printf("Emp department = %s\n", e1.emp_dept);
        printf("Emp salary = %d\n", e1.salary);
    }
    fclose(f1);
}
void add()
{
    // FOR ADDING THE RECORD
    FILE *f1;
    struct employee e1;
    printf("\nENTER THE RECORD OF EMPLOYEE\n");
    printf("\nEnter employee number ");
    scanf("%d", &e1.emp_no);
    printf("Enter employee name ");
    scanf("%s", &e1.emp_name);
    printf("Enter employee designation ");
    scanf("%s", &e1.emp_desg);
    printf("Enter employee department ");
    scanf("%s", &e1.emp_dept);
    printf("Enter employee salary ");
    scanf("%d", &e1.salary);

    f1 = fopen("emp1.txt", "a");
    fwrite(&e1, sizeof(e1), 1, f1);
    printf("\nRECORD INSERTED\n");
    fclose(f1);
}

int main()
{
    char ch;
    do
    {

        printf("\nWELCOME TO EMPLOYEE RECORD\n");
        printf("Enter 1 for add of rcord\n");
        printf("Enter 2 for display\n");
        printf("Enter 3 for update\n ");
        printf("Enter 4 for delete\n ");
        int choice;
        printf("ENTER YOUR CHOICE ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            add();
            break;
        case 2:
            display();
            break;
        default:
            printf("Invalid choice");
        }
        printf("do you want to continue ");
        scanf("%s", &ch);
    } while (ch == 'y');
    return 0;
}