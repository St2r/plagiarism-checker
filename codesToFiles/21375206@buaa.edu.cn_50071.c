"""
2022-03-29 13:11:03
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1664 KB
Accepted | 1 * (1 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 1 ms | 1648 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (4 / 10) | 1 ms | 1580 KB

"""

#include<stdio.h>

int main()
{
	int i, n;
	double sum;
	double lei,jie;
	jie = 1.0;
	sum=1;
	scanf("%d",&n);
	if(n>=17)
	printf("2.71828182845905\n");
	else
	{
	 for(i=1;i<=n;i++)
	{
		jie=jie*i;
		lei=1.0/jie;
		sum+=lei;
		
	}
	printf("%.14f\n",sum);
    }
	return 0;
	
}