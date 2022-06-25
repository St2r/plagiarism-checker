"""
2022-03-26 22:54:31
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1632 KB
Accepted | 1 * (1 / 10) | 2 ms | 1684 KB
Accepted | 1 * (2 / 10) | 3 ms | 1616 KB
Accepted | 1 * (2 / 10) | 5 ms | 1680 KB
Accepted | 1 * (4 / 10) | 2 ms | 1608 KB

"""

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{	
	int n;
	double s=1,d=1,i=1;
	scanf("%d",&n);
	while(i<=n&&i<=17){
		d=d*(1/i);
		s=s+d;
		i++;
	} 
	printf("%.14f",s);
	return 0;
 }