#include <stdio.h>
int main()
{
    int a, b, c, d, e, f;
    printf("enter marks for math ");
    scanf("%d", &a);
    printf("enter marks for eng ");
    scanf("%d", &b);
    printf("enter marks for phy ");
    scanf("%d", &c);
    printf("enter marks for bio ");
    scanf("%d", &d);
    printf("enter marks for stat ");
    scanf("%d", &e);
    f = (a + b + c + d + e) / 5;
    printf("total marks : %d", f);
    if (f >= 90)
        printf(" grade : ex");
    else if (90 > f && f >= 80)
        printf(" grade : A");
    else if (80 > f && f >= 70)
        printf(" grade : B");
    else if (70 > f && f>= 60)
        printf(" grade : C");
    else if (f < 60)
        printf(" grade : f");
}