"""
2022-03-26 19:07:33
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 2092 KB
Accepted | 1 * (35 / 100) | 2 ms | 1940 KB
Accepted | 1 * (60 / 100) | 7 ms | 2060 KB

"""

#include<stdio.h> 
#include<stdlib.h> 
int main() 
{
	int n;
	scanf("%d",&n);
	int i,k;
	int a;
	double m;
	int sum;
	for(i=1;i<=n;i++)
	{
		sum=0;
		scanf("%d",&a);
		m=sqrt(a);
		int c=m;
		for(k=2;k<=c;k++)
		{
			if(a%k==0)
			{
			if((a/k)==k)
			sum+=k;	
			else
			{
			sum=sum+k+(a/k);
			}
			}
		
		}
		sum+=1;
		if(sum==a)
		{
			printf("YES\n");
		}
		else
		printf("NO\n");
	}
	return 0;
}