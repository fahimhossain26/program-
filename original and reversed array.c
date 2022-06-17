//Write a C code which takes an array of size N as input and do the following:
//Make reverse of that array and print the differences between every value of the original and reversed array.
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
  //  scanf("%d",&arr[n]);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int reversind=0;
    int rev[n];
    for(int i=n-1;i>=0;i--)
    {
        rev[reversind]=arr[i];
        reversind++;
    }
    for(int i=0;i<n;i++)
    {
        int differ=rev[i]-arr[i];

        if(differ<0)
        {
            differ=differ*(-1);
        }
        printf("%d ",differ);

    }
    printf("\n");
}
