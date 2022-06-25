"""
2022-03-28 16:45:58
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1664 KB
Accepted | 1 * (1 / 10) | 2 ms | 1632 KB
Accepted | 1 * (2 / 10) | 2 ms | 1628 KB
Accepted | 1 * (2 / 10) | 2 ms | 1724 KB
Accepted | 1 * (4 / 10) | 2 ms | 1608 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j;
	double b=1,c=1;
	scanf("%d",&n);
	if(n>30)
	n=30;
	
	for(i=1;i<=n;i++){
		for(j=i;j>0;j--){
			b=b/j;
		}
		c=c+b;
		b=1;
	}
	printf("%.14f\n",c);
	return 0;
}