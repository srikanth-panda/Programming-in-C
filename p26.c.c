#include <stdio.h>
int variable(int i);


int main()
{
    int i = 6;
    printf("address of i : \n",&i);
}


int variable(int i)
{
    printf("The address of variable i : %u\n",&i);
}
