"""
2022-03-27 00:11:31
AC
1.0
Accepted | 1 * (5 / 100) | 12 ms | 1640 KB
Accepted | 1 * (35 / 100) | 14 ms | 1668 KB
Accepted | 1 * (60 / 100) | 13 ms | 1708 KB

"""

#include <stdio.h>
#include <math.h>
int main()
{
	int n,i,a,j,m=0;
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		m=0;
		scanf("%d",&a);
		
			
		
		for(j=1;j<a;j++){
			if(a%j==0)
			m=m+j;
		}
	
	if(m==a){
		printf("YES\n");
		
	}else
		printf("NO\n");
	
	}
	return 0;
}