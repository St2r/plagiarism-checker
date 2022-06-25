"""
2022-03-26 19:50:20
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (1 / 10) | 2 ms | 1684 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1660 KB
Accepted | 1 * (4 / 10) | 2 ms | 1616 KB

"""

#include<stdio.h>
#include<math.h>
#include<ctype.h>
int main(){
	int n,tmp=1,i=1;
	double e1=1.0,e2,tmp1=1.0;
	scanf ("%d",&n);
	while (tmp<=n)
	{
		tmp1=tmp1*i;
		e1=e1+1/tmp1;
		if (fabs(e1-e2)<=1e-16)
		{
		break;
		}
		tmp++;
		i++;
		e2=e1;
		//printf("%d",1/tmp1);
	}
	printf("%.14lf",e1);
}