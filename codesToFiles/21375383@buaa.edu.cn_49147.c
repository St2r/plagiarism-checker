"""
2022-03-28 18:44:07
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1656 KB
Accepted | 1 * (1 / 10) | 2 ms | 1640 KB
Accepted | 1 * (2 / 10) | 3 ms | 1696 KB
Accepted | 1 * (2 / 10) | 2 ms | 1632 KB
Accepted | 1 * (4 / 10) | 3 ms | 1680 KB

"""

#include <stdio.h>
int main()
{
int n,i,j;
double b,c;
i=1;
j=1;
b=1;
c=1;
scanf("%d",&n);
if(n>17){
	n=17;
}
for(i=1;i<=n;i++){
	b=b/j;
	c+=b;
	j++;
}
printf("%.14f",c);
return 0;
}