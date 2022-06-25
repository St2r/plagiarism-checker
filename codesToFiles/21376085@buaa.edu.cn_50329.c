"""
2022-03-26 08:23:59
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1716 KB
Accepted | 1 * (1 / 4) | 2 ms | 1624 KB
Accepted | 1 * (1 / 4) | 7 ms | 1616 KB
Accepted | 1 * (1 / 4) | 3 ms | 1644 KB

"""

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,j,mtp=1;
	double ret=1;
	if(n>=15){
		n=15;
	}
	for(i=1;i<=n;i++){
		mtp=1;
		for(j=1;j<=i;j++){
			mtp*=j;
		}
		ret+=1.0/mtp;
	}
	printf("%.14f",ret);
	return 0;
}