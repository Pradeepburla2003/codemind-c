#include<stdio.h>
#include<math.h>
int main()
{
    int a[100],n,i,sq;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sq=sqrt(a[i]);
        if(a[i]==sq*sq)
          printf("True
");
        else
          printf("False
");
    }
    return 0;
}