#include <stdio.h>
int main()
{
    int i = 8;
    int *j;
    j = &i;
    printf("Address of i = %u\n",&i);
    printf("Address of i = %u\n",j);
    printf("Address of j = %u\n",&j);
    printf("Value of i = %d\n",i);
    printf("Value of i = %u\n",*j);
    printf("Value of i = %d\n",*(&i));
}
