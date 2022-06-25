"""
2022-03-29 17:45:15
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1716 KB
Accepted | 1 * (1 / 10) | 2 ms | 1712 KB
Accepted | 1 * (2 / 10) | 2 ms | 1608 KB
Accepted | 1 * (2 / 10) | 2 ms | 1608 KB
Accepted | 1 * (4 / 10) | 2 ms | 1632 KB

"""

#include <stdio.h>
int main()
{
int n,m;double a=1,e=1;
scanf("%d",&n);
if (n>=18){
	n=18;
}
for(m=1;m<=n;m++)
 {a=1;
 for(int i=1;i<=m;i++){
 
a/=i;}
e+=a;}
printf("%.14lf",e);
return 0;
}