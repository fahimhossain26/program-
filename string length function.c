#include<stdio.h>
int get_length(char *str)
{
    int index=0;
    while(str[index]!='\0')
    {
        index++;
    }
   return index;
}
int main()
{
    char ar[]="helloWorld";
    int x= get_length(ar);
    printf("%d",x);
}
