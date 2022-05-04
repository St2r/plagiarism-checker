"""
2022-03-26 14:31:16
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1656 KB
Accepted | 1 * (1 / 10) | 2 ms | 1608 KB
Accepted | 1 * (2 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 3 ms | 1652 KB
Accepted | 1 * (4 / 10) | 2 ms | 1632 KB

"""

#include<stdio.h>
int main()
{
	int n, a, i;
	scanf("%d",&n);
	while(n--)
	{
	    int s=0;
		scanf("%d",&a);
		for(i=1;i<a;i++)
		{
			if(a%i==0)
			{
			s=i+s;}
		}
		if(a==s)
		 {
		 printf("YES\n");}
		else
		{
		printf("NO\n");}
	}
	return 0;
}