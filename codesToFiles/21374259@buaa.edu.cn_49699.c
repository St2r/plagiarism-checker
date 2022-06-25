"""
2022-03-28 23:31:32
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1716 KB
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (2 / 10) | 0 ms | 1656 KB
Accepted | 1 * (4 / 10) | 1 ms | 1676 KB

"""

# include <stdio.h>
int main()
{
	int n;
	double x=1, sum=1;
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		x=x*i;
		sum=sum + (1/x);
		if((1/x)<1e-14){
			break;
		}
	}
	printf("%.14f", sum);
	return 0;
}