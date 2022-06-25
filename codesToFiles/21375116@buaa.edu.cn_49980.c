"""
2022-03-29 18:06:11
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1612 KB
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (2 / 10) | 2 ms | 1648 KB
Accepted | 1 * (4 / 10) | 2 ms | 1704 KB

"""

#include<stdio.h>
int main()
{
	int i, j, n;
	double item, sum;
	n>=1;
	n<=1000000000;
	sum = 1 ;
	scanf( "%d", &n );
	if(n<=17){
	
	for( i = 1; i <= n; i++ )
	{
		item = 1;
		for( j = 1; j <= i; j++ )
		{
			item = item * j;
		}
		
		item = 1.0 / item;
		sum+= item;
	}
	
	printf("%.14f", sum);
}else{
	printf("2.71828182845905");
}
	return 0;
}