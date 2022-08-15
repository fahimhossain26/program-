/*a function named reverse_array() which will take an array, size of that array
and reverse that array. You don’t need to return anything because if you reverse that
array, the changes will be applied to the original array also. */
#include<stdio.h>
void reverse_array(int *a,int n)
{
    int i=0, j=n-1;
    while(i<j)
    {
        int tmp=a[i];  // swapping value of left side's value and right side's value
        a[i]=a[j];
        a[j]=tmp;
       // i++;
        //j--;
    }
}

int main()
{
    int ar[5]={10,20,30,40,50};
    reverse_array(ar,5);
    for(int i=0;i<5;i++)
    {
    printf("%d ",ar[i]);

    }
    return 0;
}
