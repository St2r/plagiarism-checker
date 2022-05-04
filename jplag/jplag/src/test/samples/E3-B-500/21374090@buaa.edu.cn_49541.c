"""
2022-03-29 23:47:41
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1744 KB
Accepted | 1 * (35 / 100) | 1 ms | 1684 KB
Accepted | 1 * (60 / 100) | 3 ms | 1576 KB

"""

#include <stdio.h>
 int main()
{ 
	  int n; 
	scanf("%d",&n); 
	int a[2022];
	int m=0;
	int x; 
	while(m<n)
	{ 
		scanf("%d",&x);
		int s=0;
		int t=0;
		int i=1; 
		while(i<x)
			{ 
		    if(x%i==0)
				{ 
			     a[t]=i; t++;
				} 
			i++; 
			} 
			int j=0; 
			for(j=0;j<t;j++) s+=a[j]; 
			if(s==x) 
			printf("YES\n"); 
			else printf("NO\n"); m++;
	 } 
			return 0; 
}