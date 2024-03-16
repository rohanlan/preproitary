#include <stdio.h>
int main()
{
    int a=0,b=1,c,n;
    printf("enter no of terms ");
    scanf("%d", &n);

    if (n == 0)
        return a;
    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    
}