#include<stdio.h>
void Naturalnum(int n);
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    Naturalnum(n);
    return 0;
}
void Naturalnum(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }

}