"""
2022-03-26 09:23:25
AC
1.0
Accepted | 1 * (1 / 4) | 11 ms | 1700 KB
Accepted | 1 * (1 / 4) | 9 ms | 1644 KB
Accepted | 1 * (1 / 4) | 2 ms | 1624 KB
Accepted | 1 * (1 / 4) | 16 ms | 1644 KB

"""

#include <stdio.h>
int main()
{
	int n,i,j,a;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		int b=0;
		scanf("%d",&a);
		for(j=1;j<=a/2;j++){
			if(a%j==0){
				b+=j;	
			}
		}
		if(b==a){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}