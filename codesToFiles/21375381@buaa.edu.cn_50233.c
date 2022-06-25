"""
2022-03-28 21:28:32
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1728 KB
Accepted | 1 * (1 / 10) | 1 ms | 1680 KB
Accepted | 1 * (2 / 10) | 1 ms | 1664 KB
Accepted | 1 * (2 / 10) | 1 ms | 1640 KB
Accepted | 1 * (4 / 10) | 1 ms | 1736 KB

"""

#include <stdio.h>
 
int main(void) {
 
	int n;
	double item,sum;
	sum=1;
		item=1;
	scanf("%d",&n);
    if(n>=20) n=20;
	for(int i=1;i<=n;i++)
	{
			item=item*i;
		sum=sum+1.0/item;
	}
	printf("%.14f",sum);
	return 0;
}