"""
2022-03-26 22:59:40
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1596 KB
Accepted | 1 * (35 / 100) | 3 ms | 1684 KB
Accepted | 1 * (60 / 100) | 3 ms | 1652 KB

"""

#include<stdio.h>
int main()
{int n,a[106],i,j,k,b[106];
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(j=0;j<n;j++)
{b[j]=0;
for(k=1;k<a[j];k++)
{if(a[j]%k==0)
b[j]+=k;
}
if(b[j]==a[j])	
printf("YES\n");
else
printf("NO\n");
}
return 0;
}