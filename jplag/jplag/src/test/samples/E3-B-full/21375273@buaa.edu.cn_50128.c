"""
2022-03-26 21:26:49
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1632 KB
Accepted | 1 * (35 / 100) | 3 ms | 1636 KB
Accepted | 1 * (60 / 100) | 3 ms | 1540 KB

"""

#include <stdio.h>
int main()
{
	int n;
	int x[105];
	int p; 
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&x[i]);
	}
	for(int i=1;i<=n;i++){
		p=0;
		for(int j=1;j<x[i];j++){
			if(x[i]%j==0)
			p+=j;
		}
		if(p==x[i])
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}