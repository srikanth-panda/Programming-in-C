#include <stdio.h>
int main()
{
    int i,n,factorial = 1;
    printf("The value of n = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        factorial *= i;
    }
    printf("The factorial of %d is %d",n,factorial);

    return 0;
}
