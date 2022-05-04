"""
2022-03-27 00:05:38
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1680 KB
Accepted | 1 * (35 / 100) | 2 ms | 1680 KB
Accepted | 1 * (60 / 100) | 2 ms | 1684 KB

"""

#include <stdio.h>

int main()
{
	int n,i;
	
	scanf("%d",&n);
	
	int x[n];
	
	for(i=1;i<=n;i++){
		scanf("%d",&x[i]);
		
		if(x[i]==6||x[i]==28||x[i]==496||x[i]==8128){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	
	return 0;
	
}