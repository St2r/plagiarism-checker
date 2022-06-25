"""
2022-03-28 15:01:33
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1676 KB
Accepted | 1 * (1 / 10) | 2 ms | 1608 KB
Accepted | 1 * (2 / 10) | 2 ms | 1620 KB
Accepted | 1 * (2 / 10) | 3 ms | 1716 KB
Accepted | 1 * (4 / 10) | 2 ms | 1540 KB

"""

#include <stdio.h>
int main()
{
	int n,i;
	double sum=0,he=1;
	scanf("%d",&n);
	if(n>17){
		printf("2.71828182845905\n");
	}
	else{
		for(i=1;i<=n;i++){
        	he=he*i;
			sum=sum+(1.0/he);
		}
		printf("%.14lf\n",sum+1);
	}
	return 0;
}