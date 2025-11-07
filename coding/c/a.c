#include <stdio.h>
int main()
{
    // 1.  Addition of two integers(User input)
    /*int a,b,c;
    printf("Enter  value of a ");
    scanf("%d",&a);
    printf("Enter  value of b ");
    scanf("%d",&b);
    c=a+b;
    printf(" After addition %d ",c);*/
    //  subtraction
    /*int a,b,c;
    printf("Enter  value of a ");
    scanf("%d",&a);
    printf("Enter  value of b ");
    scanf("%d",&b);
    c=a-b;
    printf("%d",c);*/
    // multiplication
    /*int a,b,c;
    printf("Enter  value of a ");
    scanf("%d",&a);
    printf("Enter  value of b ");
    scanf("%d",&b);
    c=a*b;
    printf("%d",c);*/
    // Division
    /*float a,b,c;
    printf("Enter  value of a ");
    scanf("%f",&a);
    printf("Enter  value of b ");
    scanf("%f",&b);
    c=a/b;
    printf("%f",c);*/
    // 2. Modulus(Show remainder value (0,1))
    /*int a,b,c;
    printf("Enter  value of a ");
    scanf("%d",&a);
    printf("Enter  value of b ");
    scanf("%d",&b);
    c=a%b;
    printf("%d",c);*/
    // 3. Area of circle(area=3.14*r*r)
    /*float area,r;
    printf("Enter the radius ");
    scanf("%f",&r);
    area=3.14*r*r;
    printf(" area of circle = %f ",area);*/
    // 4.area of square(area=side*side)
    /*float area,a;
    printf("Enter the side ");
    scanf("%f",&a);
    area=a*a;
    printf(" area of square = %f ",area);*/
    // 5. Area of triangle(area=0.5*base*height)
    /*float area,b,h;
    printf("Enter the base ");
    scanf("%f",&b);
    printf("Enter the height ");
    scanf("%f",&h);
    area=0.5*b*h;
    printf(" area of triangle = %f ",area);*/
    // 6. Area of rectangle(area=length*width)
    /*float area,l,w;
    printf("Enter the length ");
    scanf("%f",&l);
    printf("Enter the width ");
    scanf("%f",&w);
    area=l*w;
    printf(" area of triangle = %f ",area);*/

    // 7. Simple interest(simple interest=principal*rate*time/100)
    /*float interest,p,r,t;
    printf("Enter principal ");
    scanf("%f",&p);
    printf("Enter rate ");
    scanf("%f",&r);
    printf("Enter time ");
    scanf("%f",&t);
    interest=p*r*t/100;
    printf("  simple interest is = %f",interest);//output the result*/
    // 1..  Swapping of two numbers(using third variable)
   /* int a, b, c;
    printf("Enter the value of a ");
    scanf("%d", &a);
    printf("Enter the value of b ");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf(" After swapping a = %d\n", a);
    printf(" After swapping b = %d", b);*/
    // Without third variable
    /*int a,b,c;
    printf("Enter the value of a ");
    scanf("%d",&a);
    printf("Enter the value of b ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf(" After swapping a = %d\n",a);
    printf(" After swapping b = %d",b);*/
    // 1. OPERATORS//
    // INCREMENT OPERATORS(post,pre)
    /*int a,b;
    printf("Enter the value of a ");
    scanf("%d",&a);
    b=a++;//post increment
    printf(" the value of a %d\n",a);
    printf(" the value of b %d",b);*/

    /*int a,b;
    printf("Enter the value of a ");
    scanf("%d",&a);
    b=++a;//pre increment
    printf(" the value of a %d\n",a);
    printf(" the value of b %d",b);*/
    // DECREMENT ORERATORS(Post,pre)
    /*int a,b;
    printf("Enter the value of a ");
    scanf("%d",&a);
    b=a--;//post decrement
    printf(" the value of a %d\n",a);
    printf(" the value of b %d",b);*/

    /*int a,b;
    printf("Enter the value of a ");
    scanf("%d",&a);
    b=--a;//pre decrement
    printf(" the value of a %d\n",a);
    printf(" the value of b %d",b);*/

    // CONDITIONAL STATEMENT
    // 1. IF STATEMENT
    /*int a,b;
    printf("Enter the value of a ");
    scanf("%d",&a);
    printf("Enter the value of b ");
    scanf("%d",&b);
    if(a>b)
    {
        printf("a is greater ");
    }*/
    // 2. IF ELSE STATEMENT
    /*int a,b;
    printf("Enter the value of a ");
    scanf("%d",&a);
    printf("Enter the value of b ");
    scanf("%d",&b);
    if(a>b)
    {
        printf("a is greater ");
    }
    else
    {
    printf("a is smaller ");
    }*/

    /*int a,b;
    printf("Enter the value of a ");
    scanf("%d",&a);
    printf("Enter the value of b ");
    scanf("%d",&b);
    if(a==b)//IF TWO NO. ARE EQUAL OR NOT EQUAL
    {
        printf("both are equal ");
    }
    else
    {
        printf("not equal ");

    }*/
    // EVEN/ODD(USING IF-ELSE)
    /*int a;
    printf("Enter the value of a ");
    scanf("%d",&a);
    if(a%2==0)//EVEN/ODD USING IF ELSE STATEMENT
    {
        printf(" Even no. " );
    }
    else
    {
        printf("Odd no. ");

    }*/
    // LEAP YEAR OR NOT(IF-ELSE)
    /*int year ;
    printf("Enter the year ");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf(" Leap year " );
    }
    else
    {
        printf("Not leap year ");

    }*/
    //  1. FIND TOTAL MARKS,AVERAGE MARKS
    /*int rollno,hin,eng,maths,totmarks,avg;
    printf("Enter  rollno ");
    scanf("%d",&rollno);
    printf("Enter hindi marks ");
    scanf("%d",&hin);
    printf("Enter eng marks ");
    scanf("%d",&eng);
    printf("Enter maths marks ");
    scanf("%d",&maths);
    totmarks=hin+eng+maths;
    printf(" totalmarks = %d\n",totmarks);
    avg=totmarks/3;
    printf(" avg = %d",avg);*/
    // 2.  FAIL/PASS (USING IF -ELSE)
    /*int rollno, hin, eng, maths, totmarks, avg;
    printf("Enter  rollno ");
    scanf("%d", &rollno);
    printf("Enter hindi marks ");
    scanf("%d", &hin);
    printf("Enter eng marks ");
    scanf("%d", &eng);
    printf("Enter maths marks ");
    scanf("%d", &maths);
    totmarks = hin + eng + maths;
    printf(" totalmarks = %d\n", totmarks);
    avg = totmarks / 3;
    printf(" avg = %d\n", avg);
    if (totmarks >= 60)
    {
        printf("pass");
    }
    else
    {
        printf("fail");
    }*/
    //  3. Percentage(per=(obtained marks/total marks)*100
    /*int totalmarks, obtainedmarks;
    float percentage;
    printf("Enter total marks ");
    scanf("%d", &totalmarks);
    printf("Enter the obtained marks ");
    scanf("%d", &obtainedmarks);
    percentage = ((float)obtainedmarks / totalmarks) * 100; // calculate percentage//IMP FORMULA
    printf(" percentage = %f", percentage);*/
    // 3. IF ELSE-IF STATEMENT
    // LOGICAL OPERATORS AND(&&),OR(||),NOT(!)
    // A. USE OF AND OPERATOR(&&)
    // FIND GREATER NO. OUT OF THREE
    /*int a, b, c;
    printf("Enter value of a ");
    scanf("%d", &a);
    printf("Enter value of b ");
    scanf("%d", &b);
    printf("Enter value of c ");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("a is greater");
    }
    else if (b > a && b > c)
    {
        printf("b is greater");
    }
    else
    {
        printf("c is greater");
    }*/
    // FIND GREATER OUT OF FIVE NUMBERS
    /*int a,b,c,d,e;
    printf("Enter the value of a ");
    scanf("%d",&a);
    printf("Enter the value of b ");
    scanf("%d",&b);
    printf("Enter the value of c");
    scanf("%d",&c);
    printf("Enter the value of d ");
    scanf("%d",&d);
    printf("Enter the value of e ");
    scanf("%d",&e);
    if(a>b&&a>c&&a>d&&a>e)
    {
        printf("a is greater = %d ",a);
    }
    else if(b>a&&b>c&&b>d&&b>>e)
    {
        printf("b is greater = %d ",b);
    }
    else if(c>a&&c>b&&c>d&&c>e)
    {
        printf("c is greater = %d ",c);
    }
    else if(d>a&&d>b&&d>c&&d>e)
    {
        printf(" d is greater = %d ",d);
    }
    else
    {
        printf("e is greater = %d ",e);
    }*/
    // 1... FIND Percentage with Grades
    /* int totalmarks, obtainedmarks;
     float percentage;
     printf("Enter the total marks ");
     scanf("%d", &totalmarks);
     printf("Enter the obtained marks ");
     scanf("%d", &obtainedmarks);
     percentage = ((float)obtainedmarks / totalmarks) * 100;
     printf(" percentage = %f\n", percentage);
     if (percentage >= 90 && percentage <= 100)
     {
         printf("Grade a");
     }
     else if (percentage >= 80 && percentage < 90)
     {
         printf("Grade b");
     }
     else if (percentage >= 60 && percentage < 80)
     {
         printf("Grade c");
     }
     else if (percentage >= 40 && percentage < 60)
     {
         printf("Grade d");
     }
     else if (percentage >= 34 && percentage < 40)
     {
         printf("Pass");
     }
     else
     {
         printf("Fail");
     }*/
    // 2. ELECTRICITY BILL
    /*int custid, unit;
     printf("Enter custid ");
     scanf("%d", &custid);
     printf("Enter unit ");
     scanf("%d", &unit);
     if (unit <= 199)
     {
         printf(" bill = %f", unit * 1.20);
     }
     else if (unit >= 200 && unit <= 400)
     {
         printf(" bill = %f", unit * 1.50);
     }
     else if (unit > 400 && unit <= 600)
     {
         printf(" bill = %f", unit * 1.80);
     }
     else
     {
         printf(" bill = %f", unit * 2.00);
     }*/
    // 3. PROFIT/LOSS(IF ELSE-IF)
    /*float sellingprice, costprice, profit, loss;
    printf("Enter selling price ");
    scanf("%f", &sellingprice);
    printf("Enter cost price ");
    scanf("%f", &costprice);
    if (sellingprice > costprice)
    {
        profit = sellingprice - costprice;
        printf(" profit = %f", profit);
    }
    else if (costprice > sellingprice)
    {
        loss = costprice - sellingprice;
        printf(" loss = %f", loss);
    }
    else
    {
        printf("no profit/no loss");
    }*/

    return 0;
}