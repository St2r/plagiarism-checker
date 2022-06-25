"""
2022-03-28 21:49:26
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1716 KB
Accepted | 1 * (1 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1748 KB
Accepted | 1 * (4 / 10) | 1 ms | 1740 KB

"""

/* 
 Author: 张岱林
 Result: AC	Submission_id: 4241869
 Created at: Mon Mar 28 2022 20:32:41 GMT+0800 (China Standard Time)
 Problem_id: 5450	Time: 4	Memory: 1732
*/

#include<stdio.h>
#include<string.h>
#include<math.h>
double N=1,e = 2;
int main()
{
	double n;
	scanf("%lf", &n);
	for (int i = 1; N >= 1e-14 && i < n; N /= (++i), e += N);
	return printf("%.14lf",e),0;
}