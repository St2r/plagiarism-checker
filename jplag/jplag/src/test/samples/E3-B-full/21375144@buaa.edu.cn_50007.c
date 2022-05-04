"""
2022-03-26 18:39:27
WA
0.05
Accepted | 1 * (5 / 100) | 2 ms | 1556 KB
Wrong Answer | 0 * (35 / 100) | 2 ms | 1668 KB
Wrong Answer | 0 * (60 / 100) | 4 ms | 1552 KB

"""

#include<stdio.h>

int main()
{
	int n,num,a[100000],k=0,e,i,j,sum;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num);
		for(j=1;j<num;j++)
		{
			if(num%j==0)
			{
				a[k]=j;
				k++;
			}
		}
		for(e=0;e<=k;e++)
		{
			sum=sum+a[e];
		}
		if(sum==num)
		{
			printf("YES\n");
		}else{
			printf("NO\n");
		}
		k=0;
		a[100000]=0;
		sum=0;
	}
	return 0;
}