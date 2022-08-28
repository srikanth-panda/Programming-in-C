#include <stdio.h>
int main()
{
    int i=2,num,prime = 1;
    printf("Enter a positive integer\n");
    scanf("%d",&num);
    while(i<num)
    {
        if(num%i==0)
        {
            prime = 0;
            break;
        }
        i++;
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
