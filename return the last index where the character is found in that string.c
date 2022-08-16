#include<stdio.h>
#include<string.h>
int find_lastIndex(char*str,char c)
{
    for(int i=strlen(str)-1;i>=0;i--)
    {
        if(str[i]==c)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    char ar[]="abcdabcd";
    printf("%d\n",find_lastIndex(ar,'c'));
    return 0;

}
