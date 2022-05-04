"""
2022-03-28 19:35:39
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1704 KB
Accepted | 1 * (35 / 100) | 0 ms | 1620 KB
Accepted | 1 * (60 / 100) | 2 ms | 1700 KB

"""

#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int x;
	int a[10000]={0};
	while(n--)
	{	
		int k=0;
		int sum=0;
		scanf("%d",&x);
		for(int i=1;i<=x/2;i++)
		{
			if(x%i==0)
			{
				a[k]=i;
				k++;
			}
		}
		for(int i=0;i<k;i++)
		{
			sum += a[i];
		}
		if(sum == x)
		{
			printf("YES\n");
		}
		else{
			printf("NO\n") ;
		}
	}
	
	
}