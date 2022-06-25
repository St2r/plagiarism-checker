"""
2022-03-30 15:52:14
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1716 KB
Accepted | 1 * (1 / 10) | 1 ms | 1728 KB
Accepted | 1 * (2 / 10) | 1 ms | 1652 KB
Accepted | 1 * (2 / 10) | 0 ms | 1648 KB
Accepted | 1 * (4 / 10) | 1 ms | 1660 KB

"""

#include<stdio.h>
int main()
{
int n,i,j;
double b=1,c=1;
scanf("%d",&n);
if(n<20){
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
b=b/j;
}
c=c+b;
b=1;
}
}
else{for(i=1;i<=20;i++)
{
for(j=1;j<=i;j++)
{
b=b/j;
}
c=c+b;
b=1;
}
}


printf("%.14f\n",c);
return 0;
}