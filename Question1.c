#include<stdio.h>
float area(float);
int main()
{
    float r,result;
    printf("Enter the radius of the circle \n");
    scanf("%f",&r);
    result = area(r);
    printf("The area of circle is %f",result);
    return 0;
}
float area(float r)
{
    float a,pi;
    pi=3.14;
    a=pi*r*r;
    return a;
}
