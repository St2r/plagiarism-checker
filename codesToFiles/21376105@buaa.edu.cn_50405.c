"""
2022-03-29 20:12:01
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1624 KB
Accepted | 1 * (1 / 10) | 2 ms | 1712 KB
Accepted | 1 * (2 / 10) | 2 ms | 1620 KB
Accepted | 1 * (2 / 10) | 2 ms | 1672 KB
Accepted | 1 * (4 / 10) | 2 ms | 1640 KB

"""

#include <stdio.h>
#include <math.h>
main()
{
	int i;
	double input,x[1000],e=0;
	scanf("%lf", &input);
	x[0] = 1;
	if(input>20)
	input=20; 
	for (i = 1; i <= input; i++)
		x[i] = x[i - 1] * i;
	for (i = 0; i <= input; i++)
		e = e + 1/x[i];
	printf("%.14lf", e);
}