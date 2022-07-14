//Check if a String Contains All Alphabets//

#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%s",&a);
   int counter[26]={0};
    for(int i=0;i<strlen(a);i++)
    {
        char value=a[i];
        counter[value-'a']=1;
    }
    for (char value='a';value<='z';value++)
    {
        if (counter[value-'a']==0)
        {
            printf("no\n");
            return 0;
        }
    }
    printf("yes\n");
    return 0;


}
