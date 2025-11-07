#include <stdio.h>
// 1.
/*void sum(int a, int b) // FORMAL PARAMETERS
{
    printf("sum %d", a + b);
}
int main()
{
    int transport = 5000, fees = 20000; // ACTUAL PARAMETERS
    sum(transport, fees);// function calling
    return 0;
}*/

// 2. FUNCTION PARAMETER (FORMAL AND ACTUAL PARAMETER)
/*void sum(int a, int b)
{
    printf("sum %d\n", a + b);
}
int main()
{
    int transport = 5000, fees = 20000;
    int sale = 50000, commision = 20000;
    sum(transport, fees);// function calling
    sum(sale, commision); // function calling
    sum(1000, 2000); // function call by values
    return 0;
}*/
// 3. RETURN TYPE FUNCTION
/*int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int k;
    int transport = 100, fees = 500;
    k = sum(transport, fees); // return value in k variable
    if (k > 600)
    {
        printf("%d", k);
    }
    else
    {
        printf("%d", fees);
    }
}*/

// 3.1 RETURN TYPE(CALCULATE AREA OF CIRCLE USING RETURN TYPE FUNCTION)
// SQUARE
/*int sum(int r)
{
    // printf("%d\n", r * r);
    return r * r;
}
int main()
{
    int r;
    printf("Enter the value ");
    scanf("%d", &r);
    sum(r);
    int k;
    k = sum(r);
    printf("k = %d", k);
}*/

// 3.2 SQUARE AND AREA OF CIRCLE (using return type function)
/*int square(int r)
{
    return r * r;
}
int main()
{
    int r;
    printf("Enter the value ");
    scanf("%d", &r);
    int k;
    k = square(r); // CALLING VALUE AND VALUE TRANSFER TO K VARIABLE
    printf("square = %d\n", k);
    printf("Area of circle = %.3f\n", 3.14 * k); // area of circle = pi(3.14)*r*r
}*/

// 4.  .PASSBOOK. (personal details and opening balance( ramaining balance))

/*int ob() // opening balance
{
   int balance = 10000;
   return balance;
}
int withdraw(int k) // IMPORTANT
{
   int w;
   printf("Enter amount you want to withdraw ");
   scanf("%d", &w);
   return k - w;
}
void personal() // PERSONAL DETAIL
{
   int accountnum, ifsc, mobile;
   char custname[20], bankname[20], city[20];

   printf("Enter account no. ");
   scanf("%d", &accountnum);
   printf("custname ");
   scanf("%s", &custname);
   printf("Enter bankname ");
   scanf("%s", &bankname);
   printf("Enter ifsc ");
   scanf("%d", &ifsc);
   printf("Enter city ");
   scanf("%s", &city);
   printf("Enter mobile no. ");
   scanf("%d", &mobile);

   printf("Account no : %d\n", accountnum);
   printf("custname   : %s\n", custname);
   printf("bankname   : %s\n", bankname);
   printf("ifsc       : %d\n", ifsc);
   printf("city       : %s\n", city);
   printf("mobile no. : %d\n", mobile);
}
int main()
{

   personal();

   int k = ob();
   printf("opening balance %d\n", k);

   int j = withdraw(k);
   printf("Remaining amount %d\n", j);

   return 0;
}*/

// 4.1 .PASSBOOK. (COMPLETE)
/*int ob() // OPENING BALANCE
{
    int balance = 10000;
    return balance;
}
int withdraw(int k) // IMPORTANT
{

    int withdraw;
    printf("Enter amount you want to withdraw ");
    scanf("%d", &withdraw);
    printf("w = %d\n", withdraw);
    return k - withdraw;
}
int deposit(int l) // IMPORTANT
{
    int d;
    printf("Enter the money ");
    scanf("%d", &d);
    printf("d = %d\n", d);
    return l + d;
}
void personal() // PERSONAL DETAIL
{
    int accountnum, ifsc, mobile;
    char custname[20], bankname[20], city[20];

    printf("Enter account no. ");
    scanf("%d", &accountnum);
    printf("custname ");
    scanf("%s", &custname);
    printf("Enter bankname ");
    scanf("%s", &bankname);
    printf("Enter ifsc ");
    scanf("%d", &ifsc);
    printf("Enter city ");
    scanf("%s", &city);
    printf("Enter mobile no. ");
    scanf("%d", &mobile);

    printf("Account no : %d\n", accountnum);
    printf("custname   : %s\n", custname);
    printf("bankname   : %s\n", bankname);
    printf("ifsc       : %d\n", ifsc);
    printf("city       : %s\n", city);
    printf("mobile no. : %d\n", mobile);
}
int main()
{

    personal();

    int k = ob();
    printf("opening balance %d\n", k);

    int l = withdraw(k); // IMPORTANT
    printf("Remaining amount %d\n", l);

    int m = deposit(l); // IMPORTANT
    printf("Deposit %d", m);

    return 0;
}*/
