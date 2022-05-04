"""
2022-03-26 09:14:30
AC
1.0
Accepted | 1 * (1 / 10) | 11 ms | 1628 KB
Accepted | 1 * (1 / 10) | 11 ms | 1612 KB
Accepted | 1 * (2 / 10) | 3 ms | 1720 KB
Accepted | 1 * (2 / 10) | 6 ms | 1612 KB
Accepted | 1 * (4 / 10) | 6 ms | 1720 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int i,a,n,k,ans,r,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		k=sqrt(a);
        ans=1;
        r=0;
        for(j=2;j<=k;j++)
        {
            if(a%j==0)
            {
                ans+=j;
                r=a/j;
                ans+=r;
            }
        }
        if(k*k==a)
            ans-=k;
        if(ans==a)      
 			printf("YES\n");
 		else
 			printf("NO\n");
	}
}