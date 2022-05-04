"""
2022-03-27 16:55:18
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1624 KB
Accepted | 1 * (35 / 100) | 3 ms | 1548 KB
Accepted | 1 * (60 / 100) | 3 ms | 1652 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,sum=0,j=1,x;
	scanf("%d",&n);
	while(j<=n)
	{
		scanf("%d",&a);
		if(a%2==0)
		x=a/2;
		else
		x=(a-1)/2;
		for(int i=1;i<=x;i++)
		if(a%i==0)
		sum+=i;
		
		if(sum==a)
		printf("YES\n");
		else
		printf("NO\n");
		
		j++;
		sum=0;
	}
	return 0;
 }