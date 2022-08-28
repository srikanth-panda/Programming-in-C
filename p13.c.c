#include <stdio.h>
float conversion(int degree);

int main()
{
    int degree;
    printf("Enter degree : \n");
    scanf("%d",&degree);
    printf("The room temperature in degree celsius to fahrenheit is %f",conversion(degree));
}

float conversion(int degree)
{
    float convert;
    convert = (degree*1.8)+32;
    return convert;
}
