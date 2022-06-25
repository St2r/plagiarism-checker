"""
2022-03-28 01:01:09
AC
1.0
Accepted | 1 * (1 / 10) | 4 ms | 1668 KB
Accepted | 1 * (1 / 10) | 9 ms | 1664 KB
Accepted | 1 * (2 / 10) | 3 ms | 1660 KB
Accepted | 1 * (2 / 10) | 2 ms | 1660 KB
Accepted | 1 * (4 / 10) | 3 ms | 1692 KB
KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	double l=1,x=1;
	int i=1;
	int j=0;
	while(i<=n){
		j=1;
		l=1;
		while(j<=i){
			l*=1.0*j;
			if(1.0/l<1e-14){
				break;
			}
			j++;
		}
		x+=1.0/l;
		i++;
	} 
	printf("%.14f",x);
	return 0;
}