"""
2022-03-26 10:01:41
AC
1.0
Accepted | 1 * (5 / 100) | 9 ms | 1692 KB
Accepted | 1 * (35 / 100) | 9 ms | 1624 KB
Accepted | 1 * (60 / 100) | 17 ms | 1536 KB

"""

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h> 
//第三次练习赛
//完全数 
//10000以内完全数只有4个捏，所以这题... 
int main(void)
{
   int n;
   scanf("%d",&n);
   int a[n];
   int i;
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(i=0;i<n;i++)
   {
   	if(a[i]==6||a[i]==28||a[i]==496||a[i]==8128)
   	printf("YES\n");
   	else printf("NO\n");
   }
}