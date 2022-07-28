                          //Array Reverse Function//
#include<stdio.h>
void reverse(int *a,int n)
{
   int i=0,j=n-1;
   while(i<j)
   {

      int temp=a[i];
       a[i]=a[j];
       a[j]=temp;
       i++;
       j--;
   }

}
int main()
{
 int ar[]={5,10,11,4,8};
 reverse(ar,5);
 for(int i=0;i<5;i++)
 {
    printf("%d ",ar[i]);
 }
 return 0;

}
