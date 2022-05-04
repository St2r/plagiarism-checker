"""
2022-03-28 20:58:15
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1684 KB
Accepted | 1 * (35 / 100) | 0 ms | 1736 KB
Accepted | 1 * (60 / 100) | 3 ms | 1628 KB

"""

#include <stdio.h>
int main(){
	int n, a, i, t, m;
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		scanf("%d", &m);
		for(t=1,a=0;t<m;t++){
			if((m%t)==0)
			   a=a+t;
		}
		if(a==m)
		   printf("YES\n");
		else
		   printf("NO\n");
	}
	return 0;
}