"""
2022-03-26 14:13:31
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1704 KB
Accepted | 1 * (35 / 100) | 3 ms | 1684 KB
Accepted | 1 * (60 / 100) | 4 ms | 1628 KB

"""

#include<stdio.h>
int main()
{int n,i,he=0,x;
scanf("%d",&n);
int a[n],b[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{for(x=1;x<a[i];x++)
	{if((a[i]%x)==0)
	he=he+x;
	}
if(he==a[i])
	b[i]=1;
else
	b[i]=0;
he=0;
}
for(i=0;i<n;i++)
{
	if(b[i]==1)	
	printf("YES\n");
	else
	printf("NO\n");
}
return 0;
}