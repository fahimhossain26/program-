#include<stdio.h>
insert(int *a,int n,int pos,int val)
{

for(int i=n-2;i>=pos;i--)
  {
    a[i+1]=a[i];
 }
 a[pos]=val;
}
int main()
{
    int ar[7]={5,10,2,3,14,20};
    printf("Enter position and value ");
    int pos,val;
    scanf("%d %d",&pos,&val);
    insert(ar,7,pos,val);
    for(int i=0;i<7;i++)
    {
        printf("%d ",ar[i]);

    }
    return 0;
}


