"""
2022-03-27 17:12:00
WA
0.6
Accepted | 1 * (1 / 10) | 3 ms | 1596 KB
Accepted | 1 * (1 / 10) | 7 ms | 1616 KB
Accepted | 1 * (2 / 10) | 2 ms | 1620 KB
Accepted | 1 * (2 / 10) | 5 ms | 1620 KB
Wrong Answer | 0 * (4 / 10) | 2 ms | 1684 KB

"""

#include<stdio.h>
int main()
{
	int n, a[200], sum=1, i, j;
	scanf("%d", &n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d", &a[i]);
		for(j=2;j<=a[i]-1;j++)
		{
			if(a[i]%j==0)
			{
				sum=sum+j;
			}
		}
		if(a[i]==sum)
		printf("Yes\n");
		else 
		printf("No\n");
	} 
	 return 0;
 }