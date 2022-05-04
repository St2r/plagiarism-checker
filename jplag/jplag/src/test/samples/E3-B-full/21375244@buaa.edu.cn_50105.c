"""
2022-03-26 13:52:11
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1640 KB
Accepted | 1 * (35 / 100) | 2 ms | 1624 KB
Accepted | 1 * (60 / 100) | 4 ms | 1680 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j,ans,num;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<n;i++)
	{
		ans=0;
		for(j=1;j<a[i];j++)
		{
			if((a[i]%j)==0)
			ans=ans+j;
		}
		if(ans==a[i])
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}