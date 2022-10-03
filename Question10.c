#include<stdio.h>
void primefactor(int n);
int main()
{
    primefactor(36);
    return 0;
}
void primefactor(int n)
{
    int i;
    for(i=2;i!=1;i++)
    while(n%i==0)
    {
        n=n/i;
        printf("%d,",i);

    }
}