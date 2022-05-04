"""
2022-03-29 17:49:25
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1692 KB
Accepted | 1 * (35 / 100) | 1 ms | 1688 KB
Accepted | 1 * (60 / 100) | 3 ms | 1572 KB

"""

#include <stdio.h>
int main ()
{int n,k;
scanf("%d",&n);
for(k=1;k<=n;k++){

    int m,i;
	int sum = 0, k = 0;
	scanf("%d",&m);
	for(i = 1; i <= m-1; i++)
		if(m%i == 0)
			sum += i;
	if(m == sum)printf("YES\n");
	else printf("NO\n");
}
	return 0;
}