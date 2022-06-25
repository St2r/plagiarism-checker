"""
2022-03-26 13:43:49
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1628 KB
Accepted | 1 * (1 / 10) | 2 ms | 1728 KB
Accepted | 1 * (2 / 10) | 2 ms | 1692 KB
Accepted | 1 * (2 / 10) | 2 ms | 1656 KB
Accepted | 1 * (4 / 10) | 2 ms | 1620 KB

"""

#include<stdio.h>
#include<math.h>
int main(){int n,i,j;double e=1,d;
scanf("%d",&n);
for(i=1;i<=n;i++){d=1;if(i>70)break;
for(j=1;j<=i;j++){d=d/j;
}e+=d;
}printf("%.14f",e);
return 0;}