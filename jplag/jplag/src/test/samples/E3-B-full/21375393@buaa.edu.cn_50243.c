"""
2022-03-26 13:01:17
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1644 KB
Accepted | 1 * (60 / 100) | 3 ms | 1648 KB

"""

#include<stdio.h>
int main()
{int n,he=0,i,q=0;
scanf("%d",&n);
int a[n],p=0;
while(p<n)
{
	scanf("%d",&a[p]);p++;
}
while(q<n)
{
 for(i=1;i<=a[q]/2;i++)
 {
	if(a[q]%i==0){he=he+i;}
 }
if(he==a[q]) printf("YES\n");
else printf("NO\n");
he=0;
q++;
}
	return 0;
}