
#include<stdio.h>
struct student{
char name[100];
int roll;
int marks;
};
int main()
{
  struct student a={"fahim",21,100};
  printf("name=%s  roll=%d  marks=%d",a.name,a.roll,a.marks);


return 0;
}
