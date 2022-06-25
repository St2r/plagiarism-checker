"""
2022-03-28 22:50:29
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1740 KB
Accepted | 1 * (1 / 10) | 0 ms | 1748 KB
Accepted | 1 * (2 / 10) | 1 ms | 1640 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Accepted | 1 * (4 / 10) | 0 ms | 1676 KB

"""

#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=1;
	double sum=1;
	long long a=1;
	if(n<=17){
	for(i=1;i<=n;i++){
		a=a*i;
		sum+=1.0/a;	
	}
	}
	else{
		for(i=1;i<=17;i++){
		a=a*i;
		sum+=1.0/a;	
	}
	}
	printf("%.14f",sum);
	return 0;
}