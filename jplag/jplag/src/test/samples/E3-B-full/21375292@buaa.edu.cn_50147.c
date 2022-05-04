"""
2022-03-27 18:01:22
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1632 KB
Accepted | 1 * (35 / 100) | 2 ms | 1632 KB
Accepted | 1 * (60 / 100) | 4 ms | 1596 KB

"""

#include <stdio.h>
int main()
{
	int n, i, a, j, b=0, c;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &a);
		c=a;
		b=0;
		for(j=1;j<c;j++){
			if(c%j==0){
				b=b+j;
			}
		}
		if(b==c){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}