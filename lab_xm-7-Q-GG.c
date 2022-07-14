#include<stdio.h>
int main()
{
    int count=0;
    char str_match[5]="heidi";
    char input_str[1001];
    gets(input_str);

    int len=strlen(input_str);
    for( int i=0;i<len;i++)
    {
       if(input_str[i]==str_match[count])
       {
           count++;
           if(count==5)
           {
               break;
           }
       }

    }
    if(count==5)
       {
           printf("YES");
       }
       else
       {
           printf("NO");
       }
}
