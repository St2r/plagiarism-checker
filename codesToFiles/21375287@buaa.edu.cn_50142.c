"""
2022-03-29 22:57:32
TLE
0.0
Wrong Answer | 0 * (1 / 10) | 1 ms | 1568 KB
Wrong Answer | 0 * (1 / 10) | 2 ms | 1664 KB
Wrong Answer | 0 * (2 / 10) | 1 ms | 1624 KB
Wrong Answer | 0 * (2 / 10) | 2 ms | 1684 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 0 KB

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
		printf("YES");
		else
		printf("NO");
	}
	return 0;
}