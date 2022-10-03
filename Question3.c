#include<stdio.h>
int fun(int);
int main()
{
    int n,result;
    printf("Enter an integer\n");
    scanf("%d",&n);
    result=fun(n);
    printf("%d",result);
}
int fun (int n)
{
    if(n%2==0)
    return 1;
    else
    return 0;
}