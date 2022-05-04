"""
2022-03-28 00:20:22
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1608 KB
Accepted | 1 * (1 / 4) | 7 ms | 1624 KB
Accepted | 1 * (1 / 4) | 19 ms | 1632 KB
Accepted | 1 * (1 / 4) | 3 ms | 1696 KB
10) | 7 ms | 1664 KB
Accepted | 1 * (4 / 10) | 3 ms | 1644 KB

"""

#include <stdio.h>
int main()
{
	int n,m;
	scanf("%d",&n);
	int a;
	int i=0,p=0;
	while(i<n)
	{
	scanf("%d",&a);
	for(m=1;m<a;m++)
	{
	if(a%m==0)
		p+=m;
	}
	if(p==a)
	printf("YES\n");
	else
	printf("NO\n");
	i++;
	p=0;
	}
	return 0; 
}