"""
2022-03-26 17:25:21
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1672 KB
Accepted | 1 * (1 / 10) | 2 ms | 1712 KB
Accepted | 1 * (2 / 10) | 2 ms | 1676 KB
Accepted | 1 * (2 / 10) | 2 ms | 1708 KB
Accepted | 1 * (4 / 10) | 2 ms | 1712 KB

"""

#include <stdio.h>
#define eps 1e-15
main ()
{
	double e=1.0,t=1.0;
	int n,i;
	scanf ("%d",&n);
	for (i=1;i<=n;i++){
		t/=i;
		if (t<eps)
		break;
		e+=t;
	}
	printf ("%.14f",e);
}