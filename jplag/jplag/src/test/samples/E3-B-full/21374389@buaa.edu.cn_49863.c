"""
2022-03-27 19:36:52
AC
1.0
Accepted | 1 * (1 / 4) | 5 ms | 1696 KB
Accepted | 1 * (1 / 4) | 2 ms | 1556 KB
Accepted | 1 * (1 / 4) | 5 ms | 1608 KB
Accepted | 1 * (1 / 4) | 3 ms | 1708 KB

"""

#include<stdio.h>
int main(){
	int n,i=0,j,k,count=0;
	scanf("%d",&n);
	int a[n];
	int b[n];
	for(k=0;k<n;k++){
		scanf("%d",&a[i]);
		i++;
		for(j=0;j<a[i];j++){
			if(a[i]%j==0){
				b[i]+=j;
			}
		}
		if(a[i]==b[i]){
			printf("YES\n");
		}else printf("NO\n");
	}
	return 0;
}