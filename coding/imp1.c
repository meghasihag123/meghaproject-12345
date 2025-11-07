#include <stdio.h>
#include <gr.h>
#include <gr1.h>
#include <gr2.h>
#include <gr3.h>
int main()
{
    int a, b;
    printf("Enter a ");
    scanf("%d", &a);
    printf("Enter b ");
    scanf("%d", &b);
    int i = add(a, b);
    printf("addition = %d\n", i);

    /*float a, b;
    printf("Enter a ");
    scanf("%f", &a);
    printf("Enter b ");
    scanf("%f", &b);
    float j = div(a, b);
    printf("division = %.3f\n", j);*/

    int k = mul(a, b);
    printf("multiplication = %d\n", k);

    int l = minus(a, b);
    printf("minus %d", l);
    return 0;
}