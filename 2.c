#include <stdio.h>
int facto(int n);

int main()
{
    int i, fact = 1, number;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (i = number; i > 0; i--)
    {
        fact = fact * i;
    }
    printf("%d", fact);

    printf("\n%d",facto(number) );
}
// or using recursion
int facto(int n)
{
    if (n == 0) // terminating condition
        return 1;
    else
        return n * facto(n - 1);
}