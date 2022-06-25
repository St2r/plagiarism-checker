"""
2022-03-28 18:13:06
AC
1.0
Accepted | 1 * (1 / 10) | 3 ms | 1684 KB
Accepted | 1 * (1 / 10) | 2 ms | 1632 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (2 / 10) | 2 ms | 1648 KB
Accepted | 1 * (4 / 10) | 2 ms | 1708 KB

"""

#include <stdio.h>

int main()
{
int n,i;
scanf("%d",&n);
double m=1.0,s=1.0;
if(n<=17){
for(i=1;i<=n;i++){
    m=m*i;
    s=s+1/m;
}
printf("%.14f",s);}
if(n>17){
    printf("2.71828182845905");
}
return 0;

}