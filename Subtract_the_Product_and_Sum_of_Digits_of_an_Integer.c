#include<stdio.h>
int main()
{
    int n,pro=1,sum=0,dig,res;
    scanf("%d",&n);
    while(n!=0)
    {
        dig=n%10;
        pro*=dig;
        sum+=dig;
        n=n/10;
    }
    res=pro-sum;
    printf("%d",res);
    return 0;
}
