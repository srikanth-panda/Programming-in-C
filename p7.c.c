#include <stdio.h>
int main()
{
    int i = 2,num,prime = 1;
    printf("Enter the number \n");
    scanf("%d",&num);
    do
    {
        i++;
    }
    while(i<12);
    {
        if(num%i==0)
        {
            prime = 0;
            break;
        }
    }
    if(prime ==1)
    {
        printf("%d is a prime number",num);
    }
    else
    {
        printf("%d is not a prime number",num);
    }
    return 0;
}
