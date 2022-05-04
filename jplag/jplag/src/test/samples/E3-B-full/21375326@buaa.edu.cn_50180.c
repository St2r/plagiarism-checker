"""
2022-03-29 16:20:18
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1584 KB
Accepted | 1 * (35 / 100) | 0 ms | 1684 KB
Accepted | 1 * (60 / 100) | 3 ms | 1684 KB

"""

#include<stdio.h>
int main()
{
	int n,x[102],m;
	int sum,i;
	scanf("%d",&n);
	for(m=0;m<n;m++)
	{
		scanf("%d",&x[m]);
		sum=0;
		for(i=1;i<x[m];i++)
		{
			if((x[m]%i)==0)
			sum+=i;
		}
			if(x[m]==sum)
			printf("YES\n");
			else
			printf("NO\n");
	}
	return 0;
}