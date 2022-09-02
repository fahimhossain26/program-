#include<stdio.h>
int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
     int  sum= n*factorial(n-1); //recursion
    }
}
int main()
{
    int a;
    printf("enter e factorial number :");
    scanf("%d",&a);
    factorial(a);
    printf("%d",factorial(a));
}
