"""
2022-03-29 20:34:36
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1656 KB
Accepted | 1 * (35 / 100) | 2 ms | 1640 KB
Accepted | 1 * (60 / 100) | 4 ms | 1708 KB

"""

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int n,x[101],m,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&x[i]);
	for(i=0;i<n;i++)
	{
		int sum=0;
		for(m=1;m<x[i];m++)
		{
			if(x[i]%m==0)
			sum=sum+m;
		}
		if(sum==x[i])
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}