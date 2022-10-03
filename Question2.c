#include<stdio.h>
float intrest(float);
int main()
{
    float p,r,t,result;
    printf("Enter your principle amount\n");
    scanf("%f",&p);
    printf("Enter rate\n");
    scanf("%f",&r);
    printf("Enter time\n");
    scanf("%f",&t);
    result = (intrest);
    printf("The simple intrest is %f\n",result);
    return 0;
}
float intrest(float p, float r, float t)
{
    float intrest;
    intrest=(p*r*t)/100;
    return intrest;
}