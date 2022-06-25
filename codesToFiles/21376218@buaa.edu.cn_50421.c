"""
2022-03-27 13:54:30
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1620 KB
Accepted | 1 * (1 / 4) | 2 ms | 1668 KB
Accepted | 1 * (1 / 4) | 2 ms | 1640 KB
Accepted | 1 * (1 / 4) | 4 ms | 1664 KB

"""

#include <stdio.h>
int main()
{
	int n;
	double sum=1,a=1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		a/=i;
		sum+=a;	
		if(i>=17)
		break;
	}
	printf("%.14f",sum);
	return 0;
}