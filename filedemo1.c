#include<stdio.h>
int main()
{
    FILE *file;
    file= fopen("test.txt","w");
    if(file==NULL)
    {
        printf("file dose't exist ");
    }
    else
    {
        printf("file is open");
        fclose(file);
    }
    getch();
}

