"""
2022-03-26 09:53:31
AC
1.0
Accepted | 1 * (5 / 100) | 14 ms | 1548 KB
Accepted | 1 * (35 / 100) | 2 ms | 1600 KB
Accepted | 1 * (60 / 100) | 14 ms | 1680 KB

"""

#include <stdio.h>
int main()
{
	int n,x;
	scanf("%d", &n);
	int result[n];
	int i;
	for(i=0; i<n; i++){
		result[i]=0;
	}
	for(i=0; i<n; i++){
		scanf("%d", &x);
		if(x==6||x==28||x==496||x==8128) result[i]=1; 
	}
	for(i=0; i<n; i++){
		if(result[i]==1) printf("YES");
		else printf("NO");
		if(i!=n-1) printf("\n");
	} 
}