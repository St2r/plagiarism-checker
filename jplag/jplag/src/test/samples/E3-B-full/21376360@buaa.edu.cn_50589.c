"""
2022-03-27 10:16:20
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1716 KB
Accepted | 1 * (35 / 100) | 2 ms | 1668 KB
Accepted | 1 * (60 / 100) | 12 ms | 1640 KB

"""

#include<stdio.h>
int main()
{
	int n,i=1,j=0;
	int s[10000];
	scanf("%d",&n);
	int a[10000];
	while(j<n)
	{
		scanf("%d",&a[j]);
		while(i<a[j])
		{
			if((a[j])%i==0)
			s[j]=s[j]+i;
			i++;
		}
		j++;
		i=1;
	}
	j=0;
	while(j<n)
	{
		if(s[j]==a[j])
		printf("YES\n");
		else
		printf("NO\n");
		j++;
	}
}