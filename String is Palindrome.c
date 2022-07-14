#include<stdio.h>
#include<string.h>
int main()
{
  char a[100],b[100];
  scanf("%s",&a);
  strcpy(b,a);
  strrev(b);
  for(int i=0;i<strlen(a);i++)
  {
      if(a[i]!=b[i])
      {
          printf("not palendrom \n");
          return 0;
      }

  }
  printf("palendrom\n");
}
