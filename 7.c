#include <stdio.h>
int main()
{
    int a;
    printf("enter no :\n");
    scanf("%d", &a);
    printf("table is :\n");
    for (int i = 1;i <=10;i++){
        printf("%d\n", i * a);
    }
}