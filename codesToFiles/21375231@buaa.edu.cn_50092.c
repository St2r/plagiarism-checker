"""
2022-03-26 15:20:26
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1696 KB
Accepted | 1 * (1 / 10) | 3 ms | 1616 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 3 ms | 1620 KB
Accepted | 1 * (4 / 10) | 2 ms | 1608 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	double s=1,t=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		t*=i;
		s=s+1.0/t;
		if(t>=pow(10,14))
		break;
	}
	printf("%.14f",s);
	return 0;
}