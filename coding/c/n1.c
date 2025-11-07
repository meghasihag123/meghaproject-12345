#include <stdio.h>
// 1. ( USER DEFIEND DATA TYPE )
/*struct address
{
    int house_no;
    int street_no;
    char city[20];
    char state[20];
    int pincode;
};
struct employee
{
    int emp_no;
    char emp_name[20];
    char emp_Desg[20];
    char emp_Dept[20];
    int salary;
    struct address a1;
};
int main()
{

    struct employee e1;
    struct address a1;

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

    printf("Enter house no ");
    scanf("%d", &e1.a1.house_no);
    printf("Enter street no ");
    scanf("%d", &e1.a1.street_no);
    printf("Enter city no ");
    scanf("%s", &e1.a1.city);
    printf("Enter state ");
    scanf("%s", &e1.a1.state);
    printf("Enter pincode ");
    scanf("%d", &e1.a1.pincode);

    printf("\nEmployee Number  = %d\n", e1.emp_no);
    printf("Employee Name = %s\n", e1.emp_name);
    printf("Employee Designation = %s\n", e1.emp_Desg);
    printf("Employee Department = %s\n", e1.emp_Dept);
    printf("Employee Salary = %d\n", e1.salary);

    printf("House no. = %d\n", e1.a1.house_no);
    printf("Street no. = %d\n", e1.a1.street_no);
    printf("City = %s\n", e1.a1.city);
    printf("State = %s\n", e1.a1.state);
    printf("Pincode = %d\n", e1.a1.pincode);

    return 0;
}*/

// 2.
// One student record (structure)
/*struct student
{
    int roll_no;
    int marks[3];
    char name[20];
};
int main()
{
    struct student s1;
    printf("Enter roll no ");
    scanf("%d", &s1.roll_no);
    printf("Enter name ");
    scanf("%s", &s1.name);

    int i;
    printf("Enter the marks\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &s1.marks[i]);
    }

    printf("\nRoll\tName\tEng\tHin\tMaths\n");
    printf("%d\t", s1.roll_no);
    printf("%s\t", s1.name);
    for (i = 0; i < 3; i++)
    {
        printf("%d\t", s1.marks[i]);
    }

    return 0;
}*/

// 3. FIVE students record (STRUCTURE)
/*struct student
{
    int rollno;
    int marks[3];
    char name[20];
};
int main()
{
    int i, j;
    struct student s1[5];
    for (i = 0; i < 5; i++)
    {
        printf("\nEnter roll no ");
        scanf("%d", &s1[i].rollno);
        printf("Enter name ");
        scanf("%s", &s1[i].name);

        printf("Enter marks of three subjects\n");
        int j;
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &s1[i].marks[j]);
        }
    }

    printf("\nRollno\tname\tEng\tHin\tMaths\n");
    for (i = 0; i < 5; i++)
    {
        printf("\n%d\t", s1[i].rollno);
        printf("%s\t", s1[i].name);

        for (j = 0; j < 3; j++)
        {
            printf("%d\t", s1[i].marks[j]);
        }
    }
    return 0;
}*/
// 4. ENUMERATED DATATYPE

/*enum week
{
    sun,
    mon,
    tue,
    wed,
    thu,
    fri,
    sat
};
int main()
{
    // ***ENUMERATED DATATYPE***
    // It is a User Defined Datatype
    // It gives numbers to the name
    // syntax : enum enumname{name1,name2,name3,......};
    // enum(keyword)
    // enum week{sun,mon,tue,wed,thu,fri,sat};// sun(0),mon(1),tue(2)....
    // if you want to start with 1
    // enum week{sun=1,mon=2,tue=3......};
    // enum week{sum=1,mon,tue,wed......};(NO Need to assign value to mon=2,tue=3,....it will increament value itself by 1)

    enum week day;
    day = tue;
    printf("The store day position is = %d", day);

    return 0;
}*/

// 2...
/*enum week
{
    sun,
    mon,
    tue,
    wed,
    thu,
    fri,
    sat
};*/
/*int main()
{
     enum week
     {
         sun = 1,
         mon = 2,
         tue = 3,
         wed = 4,
         thu = 5,
         fri = 6,
         sat = 7
     };*/
/* enum week
 {
     sun = 1,
     mon,
     tue,
     wed,
     thu,
     fri,
     sat
 };

 printf("Position of entered day = %d", wed);
return 0;
}*/

// 3. DIFFERENCE BETWEEN UNION AND STRUCTURE
// ***UNION***
// VALUES OVERWRITTEN
/*union Demo
{
    int i;
    float f;
    char str;
};
int main()
{
    union Demo data;
    printf("Memory size occupied by demo : %d\n", sizeof("demo"));
    return 0;
}*/
