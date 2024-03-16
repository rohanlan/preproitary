#include <stdio.h>
void accept(int m[4])
{
    for (int i = 0; i < 4; i++)
        scanf("%d", &m[i]);
}
void print(int m[4])
{
    for (int i = 0; i < 4; i++)
    {
        printf("%d \n", m[i]);
    }
}
int main()
{
    int a[4], b[4], c[4];

    printf("enter array a elements :\n");
    accept(a);
    printf("enter array b elements :\n");
    accept(b);
    for (int i = 0; i < 4; i++)
    {
        c[i] = a[i] * b[i];
    }
    printf("arr a is : \n");
    print(a);
    printf("arr b is : \n");
    print(b);
    printf("arr c is : \n");
    print(c);
}