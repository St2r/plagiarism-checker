"""
2022-03-26 15:42:27
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1552 KB
Accepted | 1 * (35 / 100) | 2 ms | 1704 KB
Accepted | 1 * (60 / 100) | 4 ms | 1684 KB

"""

#include <stdio.h>
int main()
{
	int n,a[102],i,j,k[102];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		k[i]=0;
		for(j=1;j<a[i];j++)
		{
			if(a[i]%j==0)
			{
				k[i]=k[i]+j;
			}
		}
		if(a[i]==k[i]){
		printf("YES\n");}
		else{
		printf("NO\n");}
	}
		
	return 0;
}