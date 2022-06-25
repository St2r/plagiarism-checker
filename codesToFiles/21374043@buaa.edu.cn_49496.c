"""
2022-03-29 14:04:10
TLE
0.6
Accepted | 1 * (1 / 10) | 1 ms | 1656 KB
Accepted | 1 * (1 / 10) | 1 ms | 1712 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (2 / 10) | 1 ms | 1752 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 0 KB

"""

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int n,i;
	scanf("%d",&n);
	double sum=1,fenmu=1;
	for(i=1;i<=n;i++)
	{
		fenmu*=i;
		sum+=(1.0/fenmu);
	}
	printf("%.14f",sum);
	
	
	return 0;
}