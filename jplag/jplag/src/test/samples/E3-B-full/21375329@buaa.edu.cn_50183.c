"""
2022-03-26 16:58:24
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1552 KB
Accepted | 1 * (35 / 100) | 2 ms | 1644 KB
Accepted | 1 * (60 / 100) | 13 ms | 1664 KB

"""

#include <stdio.h>
int main()
{
	int n,i,j,s;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		s=0;
		for(j=1;j<a[i];j++){
			if(a[i]%j==0){
				s=s+j;
			}
			
		}			
		if(s==a[i]) {
			printf("YES\n");
			}
			else{
				printf("NO\n");
			}
	}
	return 0;
}