#include<stdio.h>
#include<string.h>
void check_char(char input[],char x)
{
    for(int i=0;i<strlen(input);i++)
    {
        char value=input[i];
        if (value==x)
        {
            printf("Yes\n");
            return;
        }

    }
    printf("no\n");
}
int main()
{
    char a[]="fahimhossain",b[]="ismail";
    char c='z';
    check_char(a,c);
    return 0;
}
