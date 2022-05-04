"""
2022-03-28 21:34:13
WA
0.0
Wrong Answer | 0 * (5 / 100) | 0 ms | 1660 KB
Wrong Answer | 0 * (35 / 100) | 1 ms | 1680 KB
Wrong Answer | 0 * (60 / 100) | 0 ms | 1660 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
int i,n,s=0;
int x[105];
int yue=1;
scanf("%d",&n);
scanf("%d",&x[i]);

while(x[i]%yue==0&&yue<x)
{
yue++;	
s=s+yue;


if(s=x[i])
printf("YES\n");
else
printf("NO\n");

}
	

}