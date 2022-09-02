#include<stdio.h>
 void check_prime(int num)
 {
     int i,count=0;
     for(i=2;i<num/2;i++)
     {
         if(num%i==0){
            count++;
            break;
         }
     }
     if(count==0 && num!=1)

         printf("%d this number is prime numebr",num);
     else

        printf("%d this number is not prime  numebr",num);

 }
int main()
{
    int a;
    scanf("%d",&a);
    check_prime(a);
    return 0;
}
