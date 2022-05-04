"""
2022-03-30 00:44:19
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1568 KB
Accepted | 1 * (35 / 100) | 1 ms | 1688 KB
Accepted | 1 * (60 / 100) | 3 ms | 1740 KB

"""

#include <stdio.h>
int abc(int);
int main()
{
	int n, t;
	scanf ("%d",&n);
	for (int i = 1; i <= n; i++)
	{
		scanf ("%d",&t);

		if (abc(t) == 1)
		printf ("YES\n");	
		else
		printf("NO\n");	
	}
	return 0;
}
int abc(int a)
{
	int  i, flag = 0;
	for (i = 1; i < a; i++)
	{
		if (!(a % i))
		flag += i;
	}
	return flag == a;
}

