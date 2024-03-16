#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m;
    printf("enter the number : ");
    scanf("%d", &m);
    printf("decimal of num : %d", m);
    printf("\noctal of num is : %o", m);
    printf("\n hexa of num is : %x", m);

    int a[10],i;
    for (i = 0; m > 0; i++)
    {
        a[i] = m % 2;
        m = m / 2;
    }
    printf("\nBinary of Given Number is=");
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
    return 0;
}