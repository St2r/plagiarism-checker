"""
2022-03-26 09:55:11
WA
0.4
Accepted | 1 * (1 / 10) | 4 ms | 1588 KB
Accepted | 1 * (1 / 10) | 13 ms | 1608 KB
Accepted | 1 * (2 / 10) | 16 ms | 1604 KB
Wrong Answer | 0 * (2 / 10) | 3 ms | 1608 KB
Wrong Answer | 0 * (4 / 10) | 2 ms | 1672 KB
 | 1000 ms | 896 KB

"""

#include <stdio.h>
int main()
{
int n;
double e=1.0;
scanf("%d",&n);
int i=1;
int j;
while(i<=n){
    j=i-1;
if(i==1){i=1;}else{
while(j>=1){
    i*=j;
    j--;
}
}
//确定i的阶乘值
    e+=(double)1/i;
    i++;
}
printf("%.14f",e);

return 0;
}