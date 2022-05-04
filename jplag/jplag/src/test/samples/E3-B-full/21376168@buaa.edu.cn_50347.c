"""
2022-03-28 08:59:20
AC
1.0
Accepted | 1 * (5 / 100) | 7 ms | 1544 KB
Accepted | 1 * (35 / 100) | 3 ms | 1628 KB
Accepted | 1 * (60 / 100) | 12 ms | 1696 KB
B

"""

#include<stdio.h>
int main()
{
	int n,s[105],i,k,a[105];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		s[i]=0;
		for(k=1;k<a[i];k++)
		{
			if(a[i]%k==0)	s[i]=s[i]+k;
		} 
		if(s[i]==a[i])	printf("YES\n");
		else	printf("NO\n");
	}
	return 0;
}