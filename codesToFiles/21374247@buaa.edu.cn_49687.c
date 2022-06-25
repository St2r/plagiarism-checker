"""
2022-03-28 21:03:55
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1748 KB
Accepted | 1 * (1 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 1 ms | 1636 KB
Accepted | 1 * (2 / 10) | 1 ms | 1648 KB
Accepted | 1 * (4 / 10) | 1 ms | 1652 KB

"""

#include <stdio.h>
int main()
{
	 long long int a,i,j;
	double b=1,c=1;
	scanf("%lld",&a);
	if(a<=17){
	for(i=1;i<=a;i++){
	    b*=i;
	
		c+=1.0/b;
	
	}
	printf("%.14lf",c);
	
	}
	else
	{for(i=1;i<=17;i++){
	    b*=i;
	
		c+=1.0/b;
	
	}
	printf("%.14lf",c);
	}
	
	return 0;
}