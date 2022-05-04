"""
2022-03-26 12:06:57
AC
1.0
Accepted | 1 * (5 / 100) | 10 ms | 1636 KB
Accepted | 1 * (35 / 100) | 2 ms | 1524 KB
Accepted | 1 * (60 / 100) | 18 ms | 1600 KB

"""

#include <stdio.h>
int main()
{
	int i, n, a,j;
	scanf ("%d",&n);
	for(j=1;j<=n;j++){
		int s=0;
		scanf("%d",&a);
		for(i=1;i<a;i++)
			if (a%i==0)
			s+=i;
		if (s==a)
			printf("Yes\n");
		else
			printf("No\n");
	}
		
	return 0;
 }