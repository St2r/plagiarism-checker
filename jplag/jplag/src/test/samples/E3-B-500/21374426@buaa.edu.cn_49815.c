"""
2022-03-26 16:14:51
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1584 KB
Accepted | 1 * (35 / 100) | 12 ms | 1652 KB
Accepted | 1 * (60 / 100) | 11 ms | 1624 KB

"""

#include<stdio.h>
int main()
{
	int n,k,i,j,sum;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&k);
		sum=0;
		for(j=1;j<k;j++)
		{
			if(k%j==0)
			sum+=j; 
		}
		if(k==sum)
		printf("YES\n");
		else
		printf("NO\n");
	 } 
	 return 0;
}