#include <stdio.h>
float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a,float b);

int main()
{
    float side = 2.0,a = 3.0,b= 2.0,rad =5.0;
    printf("area of square: %f\n",squareArea(side));
    printf("area of circle: %f\n",circleArea(rad));
    printf("area of rectangle:%f \n",rectangleArea(a,b));

}

float squareArea(float side)
{
    return side*side;
}
float circleArea(float rad)
{
    return 3.14*rad*rad;
}
float rectangleArea(float a, float b)
{
    return a*b;
}
