//Sorting Technique _ Selection (small to large)//
#include<stdio.h>
void sort(int *a,int n)
{
    for(int pos=0;pos<n-1;pos++)
    {
       for(int check=pos+1;check<n;check++)
       {
           if(a[check]<a[pos]) //small to large//
           {
               int tmp=a[check];
               a[check]=a[pos];
               a[pos]=tmp;
           }
       }
    }
}
int main()
{
    int ar[6]={2,5,10,7,12,54};
    sort(ar,6);
    for(int i=0;i<6;i++)
    {
        printf("%d ",ar[i]);
    }
return 0;

}
