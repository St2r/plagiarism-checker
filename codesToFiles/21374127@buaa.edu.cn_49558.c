"""
2022-03-28 22:45:26
TLE
0.0
Wrong Answer | 0 * (1 / 10) | 1 ms | 1716 KB
Wrong Answer | 0 * (1 / 10) | 1 ms | 1644 KB
Wrong Answer | 0 * (2 / 10) | 1 ms | 1660 KB
Wrong Answer | 0 * (2 / 10) | 1 ms | 1632 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 0 KB

"""

#include<stdio.h>

int main()
{
   int n,i,j; double x=1;double y=1;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
    for(j=i;j>0;j--)
	{
		x=x/j; 
	}
        y=y+x;
        x=1;
   }
    printf("%1.8f\n",y);
}