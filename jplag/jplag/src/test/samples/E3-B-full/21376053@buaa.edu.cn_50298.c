"""
2022-03-28 23:33:52
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1652 KB
Accepted | 1 * (35 / 100) | 1 ms | 1664 KB
Accepted | 1 * (60 / 100) | 3 ms | 1660 KB

"""

#include<stdio.h>
int main()
{
int n,a[101],i,sum[101];
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{sum[i]=0;
    for(int j=1;j<a[i];j++)
    {
        if(a[i]%j==0)
        {sum[i]+=j;}
    }
}
for(i=0;i<n;i++)
{if(sum[i]==a[i])
    {
        printf("YES\n");
    }
else
    {
        printf("NO\n");
    }
}
return 0;
}