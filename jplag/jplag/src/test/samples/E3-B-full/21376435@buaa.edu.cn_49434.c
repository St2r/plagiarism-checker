"""
2022-03-29 23:04:06
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1684 KB
Accepted | 1 * (35 / 100) | 1 ms | 1740 KB
Accepted | 1 * (60 / 100) | 3 ms | 1688 KB

"""

#include <stdio.h>
int main()
{
 	int n, a, b=0;
 	scanf("%d",&n);
 	while(scanf("%d",&a)!=EOF)
 	{
 		for(int j=1;j<a;j++)
 		{
 			b=a%j==0?b+j:b;
		 }
		 b==a?
		 printf("YES\n"):printf("NO\n");
		 b=0;
	 }
	return 0;
}