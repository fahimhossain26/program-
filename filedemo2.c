
#include<stdio.h>
int main()
{
    FILE *file;
    char name[20]=" roksana akter";
    int length=strlen(name);
    int i;
    file= fopen("test.txt","a"); // a= append ;[Data is added to the end of the file.]
    if(file==NULL)
    {
        printf("file dose't exist ");
    }
    else
    {
        printf("file is open\n");
        for(i=0;i<length;i++)
        {
           fputc(name[i],file) ;
        }
        printf("file is return sucessfully");
        fclose(file);
    }
    getch();
}

