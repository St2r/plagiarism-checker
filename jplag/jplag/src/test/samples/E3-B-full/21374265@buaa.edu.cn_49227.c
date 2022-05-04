"""
2022-03-26 12:02:54
AC
1.0
Accepted | 1 * (5 / 100) | 17 ms | 1552 KB
Accepted | 1 * (35 / 100) | 14 ms | 1672 KB
Accepted | 1 * (60 / 100) | 14 ms | 1668 KB

"""

#include<stdio.h>
int main()
{
	int n , i , j,  num;
	int k=0 , sum=0;
	int a[10000];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
			for(j=0;j<10000;j++)
		{
			a[j]=0;
		}
		scanf("%d",&num);
		for(j=1;j<num;j++)
		{
			if(num%j==0)
			{
				a[k]=j;
				k++;
			}
		}
		for(j=0;j<k;j++)
		{
			sum=sum+a[j];
		}
		if(sum==num)
		printf("YES\n");
		else
		printf("NO\n");
		sum=0;
	
		
	}
	return 0;
}