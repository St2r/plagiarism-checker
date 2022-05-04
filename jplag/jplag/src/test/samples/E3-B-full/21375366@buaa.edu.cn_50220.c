"""
2022-03-28 17:55:21
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1656 KB
Accepted | 1 * (35 / 100) | 2 ms | 1652 KB
Accepted | 1 * (60 / 100) | 3 ms | 1652 KB

"""

#include<stdio.h>
int main()
{
	int n,a,sum;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a);
		sum=0;
		for(int j=2;j<=(a/2);j++)
		{
			if(a%j==0) sum=sum+j;
		}
		if((sum+1)==a) printf("YES\n");
		else printf("NO\n");
	} 
	return 0;
}