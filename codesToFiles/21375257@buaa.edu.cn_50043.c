"""
2022-03-26 10:49:06
TLE
0.6
Accepted | 1 * (1 / 10) | 2 ms | 1700 KB
Accepted | 1 * (1 / 10) | 12 ms | 1596 KB
Accepted | 1 * (2 / 10) | 2 ms | 1596 KB
Accepted | 1 * (2 / 10) | 2 ms | 1664 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 820 KB

"""

#include<stdio.h>

int main()

{int  n,i;
double e=1,a=1;
scanf("%d",&n);
for(i=1;i<n+1;i++){
	a/=i;
	e+=a;
}
printf("%.14lf",e);
return 0;

}