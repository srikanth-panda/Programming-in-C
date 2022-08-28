#include <stdio.h>
int main()
{
    int marks;
    printf("enter your marks \n");
    scanf("%d",&marks);

    switch(marks/10)
    {
    case 10:
    case 9:
        printf("your grade is A\n");
        break;
    case 8:
        printf("Your grade is B\n");
        break;
    case 7:
        printf("Your grade is c\n");
        break;
    case 6:
        printf("Your grade is D\n");
        break;
    default:
        printf("You got very less marks and you are failed\n");
        break;
        return 0;
    }

}
