
#include<stdio.h>
int main()
{
    int n,r,sum=0,x;
    scanf("%d",&n);
    x=n;
    while(n!=0)
    {
        r=n%10;
        sum+=r;
        n=n/10;
    }
    n=x;
    if(n%sum==0)
      printf("True");
    else
      printf("False");
    return 0;
}
