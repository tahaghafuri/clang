#include <stdio.h>

int main()
{
    int a, b;

    printf("Please Enter An Integer:");
    scanf("%d",&a);

    printf("Please Enter An Integer:");
    scanf("%d",&b);

    int c=a+b;

    printf("\n%d+%d=%d",a,b,c);

    return 0;
}
