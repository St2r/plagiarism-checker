"""
2022-03-26 14:43:07
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1640 KB
Accepted | 1 * (35 / 100) | 2 ms | 1636 KB
Accepted | 1 * (60 / 100) | 2 ms | 1636 KB

"""

#include <stdio.h>
void w(unsigned int a)
{
	unsigned int A[10000], i, j, sum;
	sum = j = 0;
	for(i = 2; i*i <= a; i ++)
	{
		if(a % i != 0)
			continue;
		else  if (i*i == a)
		{
			A[j] = i;
			j ++;
	    }
		else 
		{
			A[j] = i;
			A[j + 1] = a / i;
			j += 2;
		}
	}
	for(i = 0; i < j; i ++)
		sum += A[i];
	sum ++;
	if(sum == a)
		printf("YES\n");
	else
		printf("NO\n");
}
int main()
{
	unsigned int n, a;
	scanf("%u", &n);
	while(n --)
	{
		scanf("%u", &a);
		w(a);
	}
	return 0;
}