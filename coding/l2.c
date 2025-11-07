#include <stdio.h>
// 1. ADDRESS , POINTER(*)
/*int main()
{

        int a = 10;
        int *b; // POINTER b
        b = &a; // address of a
        printf("address of a = %p\n", b);
        printf("value at address = %d\n", *b);
        return 0;
}*/

// 2. SWAP (FUNCTION)(PHOTOSTATE COPY)
/*void swap(int a, int b) // FORMAL PARAMETERS
{
        int c;
        c = a;
        a = b;
        b = c;
        printf("a = %d\n", a);
        printf("b = %d\n", b);
}
int main()
{
        int x = 10, y = 20; // ACTUAL PARAMETERS
        swap(x, y);
        printf("x = %d\n", x);
        printf("y = %d\n", y);
}*/

// 2.1 SWAP BY FUNCTION (USING POINTER) (TRANSFER ACTUAL VALUE TO ANOTHER VARIABLE)
/*void swap(int *a, int *b)
{
        int c;
        c = *a;
        *a = *b;
        *b = c;
        printf("%d\n", *a);
        printf("%d\n", *b);
}
int main()
{
        int x = 10, y = 20;
        swap(&x, &y);

        printf("x = %d\n", x);
        printf("y = %d\n", y);

        return 0;
}*/

// 3. ***RECURSION***
// 3. FACTORIAL (BY FUNCTION)
int fact(int n)
{
        if (n == 0)
                return 0;
        else if (n == 1)
                return 1;
        else
                return n * fact(n - 1);
}
int main()
{
        int k = fact(5);
        printf("factorial = %d\n", k);
        return 0;
}
// 3.1 FACTORIAL (USER INPUT)
/*int fact(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return n * fact(n - 1);
}
int main()
{
    int n;
    printf("Enter number ");
    scanf("%d", &n);
    int k = fact(n);
    printf("factorial = %d\n", k);
    return 0;
}*/