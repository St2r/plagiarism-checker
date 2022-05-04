"""
2022-03-28 18:33:03
AC
1.0
Accepted | 1 * (5 / 100) | 11 ms | 1632 KB
Accepted | 1 * (35 / 100) | 7 ms | 1656 KB
Accepted | 1 * (60 / 100) | 13 ms | 1648 KB

"""

#include <stdio.h>

int main()
{
	int n,a[105],i,j,s;
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		s=0;
		for(j=1;j<a[i];j++){
			if((a[i]%j)==0)
				s+=j;
		}
		if(s==a[i])
			printf("YES\n");
		else
			printf("NO\n");
	}
	
	
	return 0;	
}