#include<stdio.h>
int isdigitpresent(int n);
int main()
{
    int n,digit,num;
    printf("Enter the number");
    scanf("%d",&n);
    printf("Enter the digit");
    scanf("%d",&digit);
    num=isdigitpresent(n);
    printf("%d\n",num);
}
int isdigitpresent(int n)
{
    int rem,digit;
    while(n)
    {
        rem=n%10;
        if(rem==digit)
        {
            
            printf("%d is occured in %d",n,digit);
            n=n/10;
        }
        
    }
    printf("%d is not occured in %d",n,digit);
}