
#include <stdio.h>
int main()
{
    int i,num,prime = 1;
    printf("Enter a positive number \n");
    scanf("%d",&num);
// if we take i as 1 then any number can be divisible by 1
    for(i = 2;i<num;i++)
    {
        if(num%i == 0)
        {
            prime = 0;
            break;
        }
    }
    if(prime==1)
    {
        printf("%d is a prime number",num);
    }
    else
    {
        printf("%d is not a prime number",num);
    }
}
