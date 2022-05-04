"""
2022-03-26 16:46:26
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1696 KB
Accepted | 1 * (35 / 100) | 2 ms | 1692 KB
Accepted | 1 * (60 / 100) | 5 ms | 1640 KB

"""

#include <stdio.h>
#include <math.h>
int main()
{
	int n=0;
	int num=0;
	int sum=0;
	int i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num);
		for(j=1;j<num;j++)
		{
			if(num%j==0)
			sum+=j;
		}
		if(sum==num)
		printf("YES\n");
		else
		printf("NO\n");
		sum=0;
	}
	return 0;
}