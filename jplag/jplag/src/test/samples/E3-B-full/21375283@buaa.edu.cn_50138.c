"""
2022-03-29 21:35:23
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1732 KB
Accepted | 1 * (35 / 100) | 1 ms | 1664 KB
Accepted | 1 * (60 / 100) | 3 ms | 1688 KB

"""

#include <stdio.h>
int main()
{ 
    int n;
	scanf("%d",&n);
    int i,j,a[101],b[1001],c,ans=0,d=0,sum=0;
    for (i=1;i<=n;i++)
    {   scanf("%d",&c);
        a[i]=c;
	}
	for (i=1;i<=n;i++)
	{  sum=0;
	   d=0; 
	for (j=1;j<a[i];j++)
	    {  if(a[i]%j==0)
	       {  d=d+1;
	          b[d]=j;
		   }
	    }
	    for (c=1;c<=d;c++)
	    {   sum=sum+b[c];
    	}
	if(sum==a[i])
	{ printf("YES\n");
	 }
    else
    { printf("NO\n");
	  }
	}
    return 0;
}