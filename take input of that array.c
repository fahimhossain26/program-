/* Write a function named take_input() which will take an array and
its size. This function will take input of that array.
 After that print those values in the main() function.*/
#include<stdio.h>
#include<string.h>
void take_input(int *a,int n)
{
   for(int i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
}
int main()
{
    int ar[5];
    take_input(ar,5);
    for(int i=0;i<5;i++)
    {
        printf("%d",ar[i]);
    }
    printf("\n");
    return 0;
}
