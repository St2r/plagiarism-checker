"""
2022-03-28 21:24:36
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1684 KB
Accepted | 1 * (35 / 100) | 0 ms | 1696 KB
Accepted | 1 * (60 / 100) | 1 ms | 1680 KB

"""

#include <stdio.h>
int main() 
{
    int n,i=1,a[101],j,sum,b;
    scanf("%d",&n);
    while(i<=n)
	{
    	scanf("%d",&a[i]);
    	j=2;sum=1;b=a[i]/2;
    	while(j<b)
    	{
    		if(a[i]%j==0)
    		{
    			sum=sum+j+a[i]/j;
    			b=a[i]/j;
			}
    		j=j+1;
		}
    	if(sum==a[i])
    	{
    		printf("YES\n");
		}
		else
		{
    		printf("NO\n");
		}
    	i=i+1;
	} 
    return 0;
}