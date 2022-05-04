"""
2022-03-29 23:12:28
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1660 KB
Accepted | 1 * (35 / 100) | 1 ms | 1648 KB
Accepted | 1 * (60 / 100) | 1 ms | 1684 KB

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