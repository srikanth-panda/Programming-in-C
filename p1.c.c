#include <stdio.h>
int add(int , int );

int main()
{
    int a,b,sum;
    printf("Enter first number \n");
    scanf("%d",&a);
    printf("Enter second number \n");
    scanf("%d",&b);
    sum = add(a,b);
    printf("sum = %d\n",sum);
    return 0;
}
int add(int a, int b)
{
    return (a+b);
}
