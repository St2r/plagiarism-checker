"""
2022-03-29 20:37:35
TLE
0.6
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (1 / 10) | 1 ms | 1648 KB
Accepted | 1 * (2 / 10) | 1 ms | 1740 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 0 KB

"""

#include<stdio.h>
int main(){
	int a,i,j;
	double b=1;
	double c=1;
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