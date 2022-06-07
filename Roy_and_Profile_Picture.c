#include<stdio.h>
int main()
{
    int l,n,a,b,i;
    scanf("%d%d",&l,&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        if(l>a || l>b)
        printf("UPLOAD ANOTHER
");
        else
        {
            if(a==b)
            printf("ACCEPTED
");
            else
            printf("CROP IT
");
        }
    }
}