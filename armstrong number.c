#include<stdio.h>
int main()
{
    int num,temp,r,sum=0;
    printf("enter any number: ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r*r*r;
        temp=temp/10;
    }
    if(num==sum){
        printf(" this is Armstrong number ");
    }
    else
        printf("not armstrang number");

}
