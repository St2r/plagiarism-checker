"""
2022-03-28 11:56:07
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1600 KB
Accepted | 1 * (35 / 100) | 2 ms | 1676 KB
Accepted | 1 * (60 / 100) | 3 ms | 1676 KB

"""

#include <stdio.h> 
int main ()
{
	int n , a[104]  = {0}; 
	scanf ("%d", &n);
	int i ,sum , i1;
	for (i = 0 ; i < n ; i++)
	{ 
		sum = 0 ;
		scanf("%d", &a[i]);
		for (i1 = 1 ; i1 <= a[i]/2 ;i1++)
		{
			if (a[i]%i1 == 0)
			{
				sum+= i1;
			}
		}
		if(sum == a[i])
		{
			printf ("YES\n");
		}
		else
		{
			printf ("NO\n");
		}
	}

	return  0;
}