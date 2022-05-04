"""
2022-03-29 23:00:04
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1652 KB
Accepted | 1 * (35 / 100) | 1 ms | 1732 KB
Accepted | 1 * (60 / 100) | 2 ms | 1664 KB

"""

#include<stdio.h>
int main()
{int n=0;
scanf("%d",&n);
int a;
while (n--){
        int s=0;
        scanf("%d",&a);
for(int i=1;i<a;i++)
{
if(a%i==0)
s+=i;
}
if(s==a)
printf("YES\n");

else
printf("NO\n");
}
return 0;
}