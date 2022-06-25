"""
2022-03-28 19:14:02
TLE
0.6
Accepted | 1 * (1 / 10) | 13 ms | 1648 KB
Accepted | 1 * (1 / 10) | 12 ms | 1688 KB
Accepted | 1 * (2 / 10) | 14 ms | 1612 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 940 KB

"""

#include<stdio.h>
int main()
{
int n,i;
double sum=1,s;
scanf("%d",&n);
for(s=i=1;i<=n;i++){
	s*=i;
	sum+=1/s;
}
printf("%.14f",sum);
	return 0;
}