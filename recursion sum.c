#include<stdio.h>

int function_sum(int x)
{
    if(x==0)
    {
        return 0;
    }
    else
    {
       int sum=x+function_sum(x-1);//recursion function call
    }
}
int main()
{
    int a;
    printf("enter a number :");
    scanf("%d",&a);
    function_sum(a);
    printf("%d",function_sum(a));
}

