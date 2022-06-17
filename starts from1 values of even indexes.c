

//Write a C code which takes an array of size N as input and do the following:
//Print the values of even indexes. Index of that array starts from 1

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i+1]);
    }
    for(int i=1;i<n;i++)
    {
        if(i%2==0 ){
           printf("%d ",arr[i]);
        }
        printf("\n");
    }

    return 0;
}

