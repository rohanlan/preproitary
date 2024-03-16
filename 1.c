#include <stdio.h>
int main()
{
    int size;
    printf("enter the size of an array : \n");
    scanf("%d", &size);
    int x[size];

    printf("enter array elements : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &x[i]);
    }
    int max = x[1];
    for (int i = 1; i < size; i++)
    {
        if (max < x[i])
            max = x[i];
    }
    printf("\nmax is : %d", max);
    //     for(int i = 0; i < size;i++){
    //     printf("%d ", x[i]);
    // }
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(int argc, char *argv[])
// {
//     int i;
//     int max=atoi(argv[1]);
//     for (int i = 1; i < argc;i++){
//         if(max<atoi(argv[i]))
//         max = atoi(argv[i]);
//     }
//         printf("%d", max);
// }