"""
2022-03-28 22:26:20
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1676 KB
Accepted | 1 * (1 / 10) | 1 ms | 1632 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (4 / 10) | 1 ms | 1648 KB

"""

#include<stdio.h>
int main()
{
   int a,i,j; 
   double b=1;
   double c=1;

   scanf("%d",&a);
   for(i=1;i<=a&&i<=32;i++)
   {
    for(j=i;j>0;j--)
	{
		b=b/j; 
	}
        c=c+b;
         b=1;
   }
    printf("%.14lf\n",c);
    return 0;
}