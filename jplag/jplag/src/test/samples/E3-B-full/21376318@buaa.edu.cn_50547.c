"""
2022-03-26 09:31:54
AC
1.0
Accepted | 1 * (1 / 4) | 7 ms | 1668 KB
Accepted | 1 * (1 / 4) | 2 ms | 1592 KB
Accepted | 1 * (1 / 4) | 2 ms | 1608 KB
Accepted | 1 * (1 / 4) | 9 ms | 1676 KB

B

"""

#include <stdio.h>
int main()
{
	int n,a,i=1,sum=0;
	scanf("%d",&n);
	while(i<=n)
	{
		int s[10005]={0};
		sum=0;
		scanf("%d",&a);
		i++;
		for(int j=1,k=1;j<a;j++)
		{
			if(a%j==0)
			{
				s[k]=j;
				k++;
			}
			
		}
		for(int m=1;m<=a;m++)
		{
			sum+=s[m];
			
		}
		if(sum==a)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}