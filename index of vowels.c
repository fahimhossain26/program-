//Write a C code which takes an string of small alphabets as input which size will be maximum 100 and do the following:
//Print the index of vowels in that string. Index of that string starts from 0.
#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;
    char ch[101];
    scanf("%s",&ch);
    n=strlen(ch);
    for(int i=0;i<n;i++)
    {
        if(ch[i]=='a'|| ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
        {
            printf("%d ",i);
        }
    }


}

