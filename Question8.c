#include<stdio.h>
int fact(int x);
int main()
{
    int n,r,nPr;
    printf("Enter the value of n and r");
    scanf("%d %d",&n,&r);
    nPr=fact(n)/fact(n-r);
    printf("nPr=%d\n",nPr);
}
int fact(int x)
{
    int f=1,i;
    if(x==0)
    {
        return f;
    }
    else
    {
        for(i=1;i<=x;i++)
        {
            f=f*i;
        }
    }
    return f;
}