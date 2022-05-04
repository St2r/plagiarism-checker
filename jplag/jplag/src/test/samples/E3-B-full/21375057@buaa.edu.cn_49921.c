"""
2022-03-29 23:14:47
WA
0.0
Wrong Answer | 0 * (5 / 100) | 1 ms | 1464 KB
Wrong Answer | 0 * (35 / 100) | 1 ms | 1448 KB
Wrong Answer | 0 * (60 / 100) | 0 ms | 1440 KB

"""

#include <stdio.h>
int main()
{
	int n=2,i,sum;
	while(n!=100)
	{
		n++,sum=0;
		for(i=1;i<n;i++)
		{
			if(n%i==0)
			sum+=i;
		}
		if(n==sum)
		printf("yes\n");
		else
		printf("no\n");
	}
	return 0;
}