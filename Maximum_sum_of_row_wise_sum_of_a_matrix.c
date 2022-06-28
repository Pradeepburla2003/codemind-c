#include<stdio.h>
int main()
{
    int a[100][100],i,j,r,c,s;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int d;
    for(i=0;i<r;i++)
    {
        s=0;
        for(j=0;j<c;j++)
        {
            s+=a[i][j];
        }
        if(d<s)
        {
            d=s;
        }
    }
    printf("%d",d);
}