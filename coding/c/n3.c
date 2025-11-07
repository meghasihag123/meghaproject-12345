#include <stdio.h>
//*****FILE HANDLING*****
// EMPLOYEE RECORD (ADD,DISPLAY,SEARCH,UPDATE,DELETE(REMOVE))
struct employee
{
    int emp_no;
    char emp_name[20];
    char emp_desg[20];
    char emp_dept[20];
    int salary;
};
void delete1()
{
    FILE *f1, *f2;
    struct employee e1;
    int flag;
    f1 = fopen("emp3.txt", "r");
    f2 = fopen("temp.txt", "a");

    printf("\nWHICH RECORD YOU WANT TO REMOVE\n");
    int e;
    scanf("%d", &e);
    while (fread(&e1, sizeof(e1), 1, f1) == 1)
    {
        if (e1.emp_no != e)
        {
            fwrite(&e1, sizeof(e1), 1, f2);
        }
        if (e1.emp_no == e)
        {
            flag = 1;
        }
    }
    fclose(f1);
    fclose(f2);
    if (flag == 1)
    {
        remove("emp3.txt");
        rename("temp.txt", "emp3.txt");
    }
    else
    {
        remove("temp.txt");
    }
}
void update()
{
    FILE *f1;
    struct employee e1;
    int flag;
    f1 = fopen("emp3.txt", "r+"); // READ AND WRITE
    int e;
    printf("\nWHICH RECORD YOU WANT TO UPDATE\n");
    scanf("%d", &e);

    while (fread(&e1, sizeof(e1), 1, f1) == 1)
    {
        if (e1.emp_no == e)
        {

            printf(" ENTER YOUR NEW RECORD ");

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

            fseek(f1, -sizeof(e), SEEK_CUR);
            fwrite(&e1, sizeof(e1), 1, f1);
            printf("\nRECORD INSERTED\n");

            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("RECORD UPDATED ");
    }
    else
    {
        printf("RECORD NOT FOUND");
    }
    fclose(f1);
}
void search()
{
    FILE *f1; // FILE NAME
    struct employee e1;

    /*FILE OPEN*/ f1 = fopen("emp3.txt", "r"); // READ RECORD
    int e;
    printf("\nWhich record you want to SEARCH\n");
    scanf("%d", &e);

    while (fread(&e1, sizeof(e1), 1, f1) == 1)
    {
        if (e1.emp_no == e)
        {
            printf("\nEmp no. = %d\n", e1.emp_no);
            printf("Emp name = %s\n", e1.emp_name);
            printf("Emp designation = %s\n", e1.emp_desg);
            printf("Emp department = %s\n", e1.emp_dept);
            printf("Emp salary = %d\n", e1.salary);
        }
    }
    fclose(f1); /*FILE CLOSE*/
}
void display()
{
    FILE *f1; // FILE NAME (f1)
    struct employee e1;

    /*FILE OPEN*/ f1 = fopen("emp3.txt", "r"); // FILE OPEN/READ RECORD
    while (fread(&e1, sizeof(e1), 1, f1) == 1)
    {
        printf("\nEmp no. = %d\n", e1.emp_no);
        printf("Emp name = %s\n", e1.emp_name);
        printf("Emp designation = %s\n", e1.emp_desg);
        printf("Emp department = %s\n", e1.emp_dept);
        printf("Emp salary = %d\n", e1.salary);
    }
    fclose(f1); /*FILE CLOSE*/
}
void add()
{
    FILE *f1; // FILE NAME(f1)

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

    /*FILE OPEN*/ f1 = fopen("emp3.txt", "a"); // APPEND RECORD
    fwrite(&e1, sizeof(e1), 1, f1);            // WRITE RECORD
    printf("\nRECORD INSERTED\n");
    fclose(f1); /*FILE CLOSE*/
}
int main()
{
    char ch;
    do
    {
        printf("\nWELCOME TO EMPLOYEE RECORD\n");
        printf("Enter 1 for add record\n");
        printf("Enter 2 for diasplay\n");
        printf("Enter 3 for search\n");
        printf("Enter 4 for update\n");
        printf("Enter 5 for delete\n");

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
        case 3:
            search();
            break;
        case 4:
            update();
            break;
        case 5:
            delete1();
            break;
        default:
            printf("\nInvalid choice ");
        }
        printf("\nDo you want to continue ");
        scanf("%s", &ch);
    } while (ch == 'y');

    return 0;
}