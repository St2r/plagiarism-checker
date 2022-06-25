"""
2022-03-29 19:25:18
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1684 KB
Accepted | 1 * (1 / 10) | 2 ms | 1696 KB
Accepted | 1 * (2 / 10) | 7 ms | 1628 KB
Accepted | 1 * (2 / 10) | 2 ms | 1648 KB
Accepted | 1 * (4 / 10) | 2 ms | 1700 KB

"""

#include<stdio.h>

int main()
{
	long long a;
	scanf("%lld",&a); 
double item=1,sum=1,n;
for(n=1;n<=a;n++)
{
item*=1.0/n;
sum+=item;
if(n>20){
	break;
}
}
printf("%.14f\n",sum);
return 0;
}