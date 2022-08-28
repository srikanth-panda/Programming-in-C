#include <stdio.h>
int main()
{
    int i=1,num;
    printf("multiplication table of \n");
    scanf("%d",&num);
    do
    {
        printf("%d X %d = %d\n",num,i,num*i);
        i++;
    }
    while(i<=10);
    return 0;
}
