#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[20];
    printf("enter the string : ");
    scanf("%s", str);
    int i = 0;
    int a=0, b=0, c, d;
    while(str[i]!='\0')
    {
        if(str[i]=='A'||str[i]=='a')
            ++a;
            if(str[i]=='B'||str[i]=='b')
            ++b;
        ++i;
    }
    printf("%d ", a);
    printf("%d ", b);
    return 0;
}