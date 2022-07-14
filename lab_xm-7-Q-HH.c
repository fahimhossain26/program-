#include<stdio.h>
int main()
{
int count_zero=0,count_one=0;
int len;
scanf("%d",len);
char value[100001];
scanf("%s",&value);
//gets(value);
for(int i=0;i<len;i++)
 {
   if(value[i]=='z')
   {
       count_zero++;
   }
   if(value[i]=='n')
   {
       count_one++;
   }



 }
 for(int i=0;i<count_zero;i++)

 {
     printf("0 ");

 }
 for(int i=0;i<count_one;i++)

 {
     printf("1 \n");

 }

return 0;

}
