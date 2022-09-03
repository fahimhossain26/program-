
#include <stdio.h>

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
 int max_of_four(int a, int b, int c, int d)
 {

  int max=0;
  if(a>b&& a>c && a>d)
  {
      max=a;
  }
  else if(b>c&& b>d)
  {
      max=b;
  }
  else if(c>d)
  {
      max=c;
  }
  else
  {
      max=d;
  }
    return max;

 }

int main() {
    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    int ans = max_of_four(A, B, C, D);
    printf("%d",ans);



    return 0;
}
