"""
2022-03-26 15:02:45
AC
1.0
Accepted | 1 * (5 / 100) | 11 ms | 1612 KB
Accepted | 1 * (35 / 100) | 6 ms | 1644 KB
Accepted | 1 * (60 / 100) | 10 ms | 1556 KB

"""

#include <stdio.h>


int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int x;
		scanf("%d",&x);
		int ans=0;
		for(int j=1;j<x;j++){
			if(x%j==0) ans+=j;
		}
		if(x==ans) printf("YES\n");
		else printf("NO\n")	;
		
	
	}
	
	return 0; 
}