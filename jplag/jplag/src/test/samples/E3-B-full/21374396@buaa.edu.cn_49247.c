"""
2022-03-29 23:00:55
WA
0.0
Wrong Answer | 0 * (5 / 100) | 1 ms | 1664 KB
Wrong Answer | 0 * (35 / 100) | 1 ms | 1692 KB
Wrong Answer | 0 * (60 / 100) | 0 ms | 1684 KB

"""

#include <stdio.h>


int main()
{
int n;
double a=0,b=1,m=1;
scanf("%d",&n);
for(int i=1;i<=n;i++){
m=m*i;
a=1/m;
if(m>1000000000000000){break;}
b=b+a;

}
printf("%.14f",b);
 

return 0;}