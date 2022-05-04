"""
2022-03-26 15:43:30
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1644 KB
Accepted | 1 * (35 / 100) | 2 ms | 1548 KB
Accepted | 1 * (60 / 100) | 4 ms | 1544 KB

"""

#include<stdio.h>
int main()
{
	int i,a,n,sum;
	i=0,sum=0;
	scanf("%d",&n);
	while(i<n)
	{
		scanf("%d",&a);
		i++;
		for(int j=a-1;j>0;j--)
		{
			if(a%j==0)
				sum=sum+j;
		}
		if(sum==a)
		    printf("YES\n");
		else
		    printf("NO\n");
		sum=0;
	}
	return 0;
}