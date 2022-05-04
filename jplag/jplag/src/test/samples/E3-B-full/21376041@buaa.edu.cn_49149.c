"""
2022-03-26 11:01:36
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1620 KB
Accepted | 1 * (35 / 100) | 10 ms | 1628 KB
Accepted | 1 * (60 / 100) | 11 ms | 1572 KB

"""

#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i = 0;i < n;i++)
	{
		int num;
		scanf("%d",&num);
		int sum = 0;
		int u;
		for(u = 1;u <= num/2;u++)
		{
			if(num%u == 0)
			{
				sum += u;
			}	
			else;
			
		}
		if(sum == num)
			{
				arr[i] = 1;
			}
		else
			{
                arr[i] = 0; 
			}
		
	}
	for(i = 0;i < n;i++)
	{
		if(arr[i] == 1)
		{
			printf("YES\n");
		}
		if(arr[i] == 0)
		{
			printf("NO\n");
		}
	}
	return 0;
}