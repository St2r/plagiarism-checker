"""
2022-03-26 19:00:48
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1624 KB
Accepted | 1 * (35 / 100) | 2 ms | 1544 KB
Accepted | 1 * (60 / 100) | 4 ms | 1684 KB

"""

#include<stdio.h>
#include<math.h>
#include<ctype.h>
int main(){
	int n,a,m=1,sum=0;
	scanf ("%d",&n);
	while (n--)
	{
		scanf ("%d",&a);
		while (m<a)
		{
			if (a%m==0)
			{
			sum=sum+m;
			//printf("%d",m);
			}
			m++;
		}
		if (sum==a)
		printf("YES\n");
		else printf("NO\n");
		m=1;
		sum=0;
	}
}