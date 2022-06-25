"""
2022-03-26 15:19:47
AC
1.0
Accepted | 1.0 * (3 / 15) | 2 ms | 1616 KB
Accepted | 1.0 * (2 / 15) | 3 ms | 1708 KB
Accepted | 1.0 * (4 / 15) | 2 ms | 1640 KB
Accepted | 1.0 * (1 / 15) | 2 ms | 1620 KB
Accepted | 1.0 * (5 / 15) | 3 ms | 1636 KB
ms | 872 KB

"""

#include<stdio.h>
int main()
{
int n;
double sum=1;
double a=1,b=1;
scanf("%d",&n);
int i=1;
for(i=1;i<=n;i++){
	b=b*i;
	sum+=1.0/b;
}
printf("%.14f",sum);
}