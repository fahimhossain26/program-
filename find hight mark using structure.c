#include<stdio.h>
struct student{
char name[100];
int roll;
int marks;
};
int main()
{
int n;
scanf("%d",&n);
struct student highest={.marks=0};
for(int i=0;i<n;i++)
{
    struct student a;
    scanf("%s %d %d",&a.name,&a.roll,&a.marks);
    if(a.marks>highest.marks)
    {
        highest=a;
    }

}
    printf(" highest narke details=%s %d %d\n",highest.name,highest.roll,highest.marks);


return 0;
}

