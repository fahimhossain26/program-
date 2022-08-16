
/*Write a function named find_firstIndex() which will take a string and
 a character as parameters and return the first index where the
 character is found in that string. If it is not found then return -1.  */
#include<stdio.h>
int find_firstIndex(char*str,char c)
{
    for(int i=0;i<strlen(str);i++)
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
    printf("%d\n",find_firstIndex(ar,'d'));
    return 0;

}
