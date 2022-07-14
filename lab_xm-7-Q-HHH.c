#include<stdio.h>
#include<stdbool.h>
int main()
{
     bool checking=true;

    int count_one=0,count_zero=0;
   char str[101];
   gets(str);
   int len=strlen(str);
   for(int i=0;i<len;i++)
   {
       if(str[i]==1)
       {
           count_one++;
          // count_zero=0;
       }
       else
       {
           count_zero++;
         //  count_one=0;
       }
       if(count_one>=7||count_zero>=7)
       {
         checking=true;
       }

   }

 if(checking==true)
 {
     printf("YES");

 }
 else if(checking!=true)
 {
   printf("NO");
 }


}
