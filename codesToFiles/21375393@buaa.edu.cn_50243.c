"""
2022-03-28 23:17:49
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1740 KB
Accepted | 1 * (1 / 10) | 1 ms | 1752 KB
Accepted | 1 * (2 / 10) | 1 ms | 1668 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (4 / 10) | 1 ms | 1756 KB

"""

#include<stdio.h>
int main()
{int n,i=1,p;double he=1,z=1;
scanf("%d",&n);
for(p=1;p<=n;p++)
{
     z=z*p;
     he=he+1.0/z;
	if(p>=17)break;
 }
printf("%.14lf",he);
	return 0;
}