"""
2022-03-27 14:49:56
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1648 KB
Accepted | 1 * (35 / 100) | 2 ms | 1652 KB
Accepted | 1 * (60 / 100) | 4 ms | 1704 KB

"""

#include <stdio.h>
int main(){
	int n,i,j;//xunhuan
	int sum[100]={0};//qiuhe
	int a[100]={0};//chucun
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=1;j<a[i];j++){
			if(a[i]%j==0){
				sum[i]=sum[i]+j;
			}
		}
		if(sum[i]==a[i]){
				printf("YES\n");
			}
		else{
				printf("NO\n");
			}
	}
	return 0;
}