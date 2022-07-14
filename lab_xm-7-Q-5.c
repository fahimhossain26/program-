#include<stdio.h>
int main()
{
    int i,n,sum=0;
    scanf("%d",&n);
    while(0<n)
    {
        i=n%10;
        sum=sum+i;
        n=n/10;

    }
      printf("%d",sum);
}
