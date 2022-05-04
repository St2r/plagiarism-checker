"""
2022-03-27 21:47:01
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1536 KB
Accepted | 1 * (35 / 100) | 2 ms | 1644 KB
Accepted | 1 * (60 / 100) | 4 ms | 1528 KB

"""

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[110]={0};
	int sum[110]={0};
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		for(int m=1;m<a[i];m++){
			if(a[i]%m==0){
				sum[i]+=m;
		    }
		}
		if(sum[i]==a[i]){
			printf("YES\n");
		} else{
			printf("NO\n");
		}
	}
	return 0;
}