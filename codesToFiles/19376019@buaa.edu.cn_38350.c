"""
2022-03-29 15:59:13
TLE
0.6
Accepted | 1 * (1 / 10) | 1 ms | 1664 KB
Accepted | 1 * (1 / 10) | 1 ms | 1652 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (2 / 10) | 0 ms | 1760 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 0 KB

"""

#include<stdio.h>
void main()
{
   int a,i,j; double b=1;double c=1;
   scanf("%d",&a);
   for(i=1;i<=a;i++)
   {
    for(j=i;j>0;j--)
	{
		b=b/j;
	}
        c=c+b;
         b=1;
   }
    printf("%1.14f\n",c);
}