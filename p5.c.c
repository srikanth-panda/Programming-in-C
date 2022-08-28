#include <stdio.h>
int main()
{
    int Maths,Physics,Chemistry;
    float Total;
    printf("The marks of Physics = \n");
    scanf("%d",&Physics);

    printf("The marks of maths = \n");
    scanf("%d",&Maths);

    printf("The marks of chemistry = \n");
    scanf("%d",&Chemistry);

    Total = (Physics + Maths + Chemistry)/3;
    if ((Total < 40 || Physics < 33 || Maths < 33 || Chemistry < 33 ))
    {
        printf("Your total percentage is %f and you are fail",Total);
    }
    else
    {
        printf("your total percentage is %f and you are pass",Total);
    }
}
