"""
2022-03-26 14:59:40
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1648 KB
Accepted | 1 * (60 / 100) | 12 ms | 1552 KB

"""

#include <stdio.h>
int main(){
	int n;scanf("%d",&n);
	int a[105]={0},i=0,k=0,l=0,sum=0;
	for(i=0;i<n;i++){scanf("%d",&a[i]);
	}
	for(k=0;k<n;k++){
		for(l=1;l<a[k];l++){
			if(a[k]%l==0){sum=sum+l;
			}
			else {sum=sum;}}
			if(sum==a[k]){printf("YES\n");
			}
			else{printf("NO\n");
			}
			sum=0;
		}
	return 0;
}