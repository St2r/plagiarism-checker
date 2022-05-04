"""
2022-03-26 14:56:50
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1628 KB
Accepted | 1 * (35 / 100) | 2 ms | 1684 KB
Accepted | 1 * (60 / 100) | 7 ms | 1700 KB

"""

#include <stdio.h>

int main(void) {
	int n,a,b;
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		b=0;
		scanf("%d",&a);
		for(int j=1;j<=a/2;j++){
			if(a%j==0)b+=j;
		}
		if(b==a)printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}