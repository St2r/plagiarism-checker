"""
2022-03-26 16:09:04
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1708 KB
Accepted | 1 * (1 / 10) | 2 ms | 1712 KB
Accepted | 1 * (2 / 10) | 2 ms | 1704 KB
Accepted | 1 * (2 / 10) | 2 ms | 1688 KB
Accepted | 1 * (4 / 10) | 2 ms | 1712 KB

"""

#include<stdio.h>
#include<math.h>

int main()
{
	int n, i;
	double e, fenshu,eps=1e-15;
	scanf("%d",&n);
	
	e = 1.0;
	fenshu=1.0;
	
	for(i=1;i<=n;i++){
		fenshu = fenshu*(1.0/i);
		e += fenshu;
		if(fenshu<eps) break;
	}
	printf("%.14f",e);

	return 0;
}