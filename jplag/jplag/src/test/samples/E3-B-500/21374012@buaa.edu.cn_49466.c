"""
2022-03-29 23:50:17
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 2148 KB
Accepted | 1 * (35 / 100) | 1 ms | 2056 KB
Accepted | 1 * (60 / 100) | 0 ms | 2100 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int i,a,n,k,l,r,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
			k=sqrt(a);
        l=1;
        r=0;
    for(j=2;j<=k;j++)
{
    if(a%j==0)
      {
    	l=l+j;
        r=a/j;
        l=l+r;
    }
        }
        if(k*k==a)
            l=l-k;
if(l==a)      
 			printf("YES\n");
else
 			printf("NO\n");
	}
}