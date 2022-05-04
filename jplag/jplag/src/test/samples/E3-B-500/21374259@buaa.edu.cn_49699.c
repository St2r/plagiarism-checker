"""
2022-03-27 20:16:00
AC
1.0
Accepted | 1 * (5 / 100) | 14 ms | 1700 KB
Accepted | 1 * (35 / 100) | 3 ms | 1692 KB
Accepted | 1 * (60 / 100) | 20 ms | 1628 KB

"""

#include <stdio.h>
int main ()
{
	int n;
	scanf("%d\n", &n);
	int a[100];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(int i=0;i<n;i++){
		int s=0;
		for(int j=1;j<a[i];j++){
			if((a[i]%j)==0){
				s=s+j;
			}
		}if(s==a[i]){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}