
/* Write a function named swap() which will take two pointers which
indicate two integer variables. After that swap the values of those
pointers and print them in the main() function*/
#include<stdio.h>
#include<string.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a=10,b=20;
    swap(&a,&b);
    printf("%d %d\n",a,b);
    return 0;
}
