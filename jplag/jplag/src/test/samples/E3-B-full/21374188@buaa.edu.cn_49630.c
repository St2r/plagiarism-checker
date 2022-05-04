"""
2022-03-29 12:26:09
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1968 KB
Accepted | 1 * (35 / 100) | 1 ms | 2044 KB
Accepted | 1 * (60 / 100) | 3 ms | 2072 KB

"""

#include<stdio.h>
#include<string.h>
#include<math.h>
int main() 
{
int n,i,j,sum[100000]={0};
scanf("%d",&n);
int a[n+5];
for(i=1;i<=n;i++)
{
    scanf("%d",&a[i]) ;
    for(j=1;j<a[i];j++)
    {
    if(a[i]%j==0) 
    sum[i]=sum[i]+j;
    }
    if(sum[i]==a[i]) 
    printf("YES\n");
    else 
    printf("NO\n");
}
return 0;
}