#include<stdio.h>
int fact(int n);
int main()
{
    int n,factorial;
    printf("Enter the number\n");
    scanf("%d",&n);
    factorial=fact(n);
    printf("factorial of the %d is %d\n",n,factorial);
    return 0;
}
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
        
    }
    return f;
}