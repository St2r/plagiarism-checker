"""
2022-03-28 22:49:15
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1720 KB
Accepted | 1 * (35 / 100) | 1 ms | 1732 KB
Accepted | 1 * (60 / 100) | 3 ms | 1612 KB

"""

#include <stdio.h>
int main()
{
	 int n,i=0,h=0,k=1,l=0,j=0,a[10000]={0};
	 scanf("%d",&n);
	 while(i<n)
	 {
	 	scanf("%d",&h);
	 	while(k<h)
	 	{
	 	 if(h%k==0) 
		  {
		    a[j]=k;
		    j++;
		  }
	 	k++;
		}
		k=0;
		while(k<j)
		{
		  l=l+a[k];
		  k++;
		}
		if(l==h) printf("YES\n");
		else printf("NO\n");
	     i++;
	     k=1;
	     h=0;
	     l=0;
	     j=0;
	     
	 }
	
	
	return 0;
}