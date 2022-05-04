"""
2022-03-26 14:47:32
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1704 KB
Accepted | 1 * (35 / 100) | 2 ms | 1700 KB
Accepted | 1 * (60 / 100) | 4 ms | 1652 KB

"""

#include <stdio.h>
int main()
{
int n,i=1,a[105],m=1,s=0;
scanf("%d",&n);
while(i<=n)
{
	scanf("%d",&a[i]);
	i++;
}
i=1;
while(i<=n)
{
	s=0;
	while(m<a[i])
	{
		if(a[i]%m==0)
		{s=s+m;}
		m++;
	}
	if(a[i]==s)
	{
		printf("YES\n");
	}
	else 
	{
		printf("NO\n");
	}
	m=1;
	i++; 
	
}
	return 0;
 }