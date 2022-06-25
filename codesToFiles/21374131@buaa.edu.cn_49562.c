"""
2022-03-28 21:52:20
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1644 KB
Accepted | 1 * (1 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 1 ms | 1680 KB
Accepted | 1 * (2 / 10) | 0 ms | 1732 KB
Accepted | 1 * (4 / 10) | 1 ms | 1688 KB

"""

#include<stdio.h>
#include<math.h>

int main()
{
	int n;
	double a=1,e_=1,t,i,c=2.0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(a<5e-15)
		break;
		a=a/(i);
		e_+=a;
	}
	printf("%.14f",e_);
	
	return 0;
}