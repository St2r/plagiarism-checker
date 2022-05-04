"""
2022-03-29 13:57:42
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1624 KB
Accepted | 1 * (35 / 100) | 1 ms | 1628 KB
Accepted | 1 * (60 / 100) | 0 ms | 1656 KB

"""

#include <stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);}
		for(i=0;i<n;i++){
		if(a[i]==6 || a[i]== 28 || a[i]==496||a[i]== 8128){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}return 0;
}