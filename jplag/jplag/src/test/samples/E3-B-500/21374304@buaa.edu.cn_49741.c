"""
2022-03-29 23:37:33
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 2136 KB
Accepted | 1 * (35 / 100) | 1 ms | 2132 KB
Accepted | 1 * (60 / 100) | 1 ms | 2140 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int a,b,c,d=0;
		scanf("%d",&a);
		c=sqrt(a);
		for(b=1;b<=c;b++)
			if(a%b==0)
				d=d+b+a/b;
		if(a==d-a)
			printf("YES\n");
		else
			printf("NO\n");
		
	}
	return 0;
}