// Array Remove at any Position using function //
#include<stdio.h>
void array_dlt(int *a,int n,int pos)
{
    for(int i=pos+1;i<n;i++)
    {
        a[i-1]=a[i];
    }
}

int main()
{
    int ar[6]={5,10,2,3,14,20};
    int pos;
    printf("Enter position: ");
    scanf("%d",&pos);
    array_dlt(ar,6,pos);
    for(int i=0;i<5;i++)
    {
      printf("%d ",ar[i]);
    }
    return 0;

}
