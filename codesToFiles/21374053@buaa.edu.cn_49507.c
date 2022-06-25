"""
2022-03-29 16:57:59
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1648 KB
Accepted | 1 * (1 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1648 KB
Accepted | 1 * (2 / 10) | 2 ms | 1700 KB
Accepted | 1 * (4 / 10) | 2 ms | 1700 KB

"""

#include<stdio.h>
int main()
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
    if(i>=20)break;
   }
    printf("%.14f\n",c);
}