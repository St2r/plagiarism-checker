"""
2022-03-29 23:36:35
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1732 KB
Accepted | 1 * (1 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 1 ms | 1640 KB
Accepted | 1 * (2 / 10) | 0 ms | 1632 KB
Accepted | 1 * (4 / 10) | 1 ms | 1676 KB

"""

#include<stdio.h>
#include<math.h>
long long n,d;
double c=1;
int main()
{
 scanf("%d",&n);
 if(n>23){
	n=23; 
 }
 for(int i=1;i<=n;i++){
	 d=1;
	for(int j=1;j<=i;j++){
	d=d*j;	
	} 
	c=c+((1.0)/d);
 }
 printf("%.14lf",c);
 return 0;
}