#include<stdio.h>
void Naturaloddnum(int n);
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    Naturaloddnum(n);
    return 0;
}
void Naturaloddnum(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("%d\n",2*i-1);
    }
}