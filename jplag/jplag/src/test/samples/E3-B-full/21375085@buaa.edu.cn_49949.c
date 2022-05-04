"""
2022-03-26 18:06:18
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1676 KB
Accepted | 1 * (35 / 100) | 2 ms | 1640 KB
Accepted | 1 * (60 / 100) | 2 ms | 1544 KB

"""

#include<stdio.h>
int main(){
	int n,x[101],i,a;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
	}
	for(i=0;i<n;i++){
		
	if(x[i]==6||x[i]==28||x[i]==496||x[i]==8128)
			printf("YES\n");
		else
		printf("NO\n");
		
	}
	return 0;
}