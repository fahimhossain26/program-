/* Write a function named get_sum() which will take an array of integers
 as a parameter and return the sum of all elements of that array.*/
#include<stdio.h>
int get_sum(int *a,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    return sum;
}
int main()
{
  int ar[]={1,2,3,4,5};

  printf("%d\n",get_sum(ar,5));
  return 0;

}
