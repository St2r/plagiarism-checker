"""
2022-03-28 08:56:54
AC
1.0
Accepted | 1 * (1 / 4) | 4 ms | 1636 KB
Accepted | 1 * (1 / 4) | 3 ms | 1708 KB
Accepted | 1 * (1 / 4) | 2 ms | 1624 KB
Accepted | 1 * (1 / 4) | 2 ms | 1660 KB

"""

#include <stdio.h> 

int main()
{
	int n,i;
	float e=1,a=1.0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		a=a*(i+1);
		if(1/a>0.000000000000001){
			e=e+1/a;
		}
	}
	printf("%.14f",e);
	return 0;
}