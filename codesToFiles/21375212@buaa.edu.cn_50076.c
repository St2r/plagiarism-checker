"""
2022-03-26 14:21:25
AC
1.0
Accepted | 1 * (1 / 8) | 2 ms | 1616 KB
Accepted | 1 * (1 / 8) | 2 ms | 1688 KB
Accepted | 1 * (1 / 8) | 3 ms | 1596 KB
Accepted | 1 * (1 / 8) | 2 ms | 1596 KB
Accepted | 1 * (1 / 8) | 2 ms | 1636 KB
Accepted | 1 * (1 / 8) | 2 ms | 1688 KB
Accepted | 1 * (1 / 8) | 5 ms | 1684 KB
Accepted | 1 * (1 / 8) | 2 ms | 1636 KB

"""

#include<stdio.h>
#include<ctype.h>
#include<math.h>
int main ()
{
	double eps=10e-15;
	int n;
	int i;
	double sum=0,temp=1;
	scanf("%d",&n);
	for(i=1;i<=n+1;i++){
		sum+=temp;
		temp*=(1.0/i);
//		printf("%.14lf\n",temp);
		if(temp<eps){
			break;
		}
	}
	printf("%.14lf",sum);
	return 0;
}