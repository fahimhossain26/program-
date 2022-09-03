// No Return + No Parameter Function
#include<stdio.h>
void take_array(void)
{
      int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
       printf("\n");
}
int main()
{
    int test;
    scanf("%d",&test);
    for(int i=0;i<test;i++)
    {
      take_array();
    }

}
