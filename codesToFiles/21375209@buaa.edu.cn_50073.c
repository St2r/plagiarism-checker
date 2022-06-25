"""
2022-03-26 14:44:42
AC
1.0
Accepted | 1 * (1 / 10) | 7 ms | 1628 KB
Accepted | 1 * (1 / 10) | 2 ms | 1628 KB
Accepted | 1 * (2 / 10) | 7 ms | 1652 KB
Accepted | 1 * (2 / 10) | 3 ms | 1656 KB
Accepted | 1 * (4 / 10) | 2 ms | 1612 KB

"""

#include<stdio.h>
int main()
{
	int n;
	int i,k=1;
	double s=1;
	scanf("%d",&n);
	while(k<=n){
		double t=1;
		for(i=1;i<=k;i++){
			t*=i;		
		}
		s+=1/t;
		if(k==17) break;
		k++;
	} 
	printf("%.14lf",s);
	return 0;
}