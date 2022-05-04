"""
2022-03-26 20:47:37
AC
1.0
Accepted | 1 * (1 / 4) | 3 ms | 1712 KB
Accepted | 1 * (1 / 4) | 3 ms | 1628 KB
Accepted | 1 * (1 / 4) | 2 ms | 1716 KB
Accepted | 1 * (1 / 4) | 7 ms | 1640 KB

"""

#include<stdio.h>
int main()
{
	int n,a;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		int sum=0;
		for(j=1;j<a;j++)
		{
			if(a%j==0) {
			
			sum +=j;}
		}
			if(sum==a) printf("YES\n");
			else printf("NO\n");
			
			
		
		
	}
	return 0;
}