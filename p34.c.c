#include <stdio.h>
int main()
{
    char ch;
    printf("enter a character \n");
    scanf("c",&ch);
    if(ch>=97 && ch <= 122)
    {
        printf(" It is a lower case");
    }
    else
    {
        printf(" It is not a lower case");
    }
    return 0;
}
