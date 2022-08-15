/* Write a function named print_oneToN() which will take an
 integer value N as parameter and print all values
 from 1 to N inclusive. Inclusive means 1 and N will be also included. */
#include<stdio.h>
void print_oneToN(int n)
{
    for(int i=2;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i); // prints all even numbers
        }
       // printf("%d \n",i);
    }
    printf("\n");
}
int main()
{
  print_oneToN(10);
  return 0;
}
