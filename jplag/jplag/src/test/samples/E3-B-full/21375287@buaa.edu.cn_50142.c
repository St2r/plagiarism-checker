"""
2022-03-29 22:59:06
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1684 KB
Accepted | 1 * (35 / 100) | 1 ms | 1684 KB
Accepted | 1 * (60 / 100) | 2 ms | 1628 KB

"""

#include <stdio.h>
int main ()
{
	int n,sum;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int a;
		sum=0;
		scanf("%d",&a);
		for(int b=1;b<a;)
		{
			if(a%b==0)
			sum=sum+b;
			b++;
		}
		if(sum==a)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}