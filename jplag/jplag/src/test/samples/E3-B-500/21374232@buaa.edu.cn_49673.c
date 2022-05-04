"""
2022-03-26 23:28:21
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1608 KB
Accepted | 1 * (35 / 100) | 2 ms | 1708 KB
Accepted | 1 * (60 / 100) | 9 ms | 1664 KB

"""

#include <stdio.h>
int main()
{
	int n,a[101],i,m,k=0;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(m = 1,k=0;m<a[i];m++){
			if(a[i] % m ==0) 
				k = k + m;
			else k = k + 0;
		}
		if(k == a[i])printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
 }