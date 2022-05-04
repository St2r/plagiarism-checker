"""
2022-03-29 21:30:08
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1684 KB
Accepted | 1 * (35 / 100) | 1 ms | 1692 KB
Accepted | 1 * (60 / 100) | 2 ms | 1628 KB

"""

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()  
{
	int n,b,i,j,sum;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&b);
		sum=0;
		for(j=1;j<b;j++)
		{
			if(b%j==0)
			sum=sum+j;
		}
		if(sum==b)
		printf("YES\n");
		if(sum!=b)
		printf("NO\n");
	}
    return 0;
}