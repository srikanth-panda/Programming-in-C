#include <stdio.h>
int main()
{
    int i = 1,sum = 0;
    while(i<=10)
    {
        sum += i;
        i++;

    }
    printf("The value of sum (1 to 10) is %d\n",sum);

    return 0;
}
