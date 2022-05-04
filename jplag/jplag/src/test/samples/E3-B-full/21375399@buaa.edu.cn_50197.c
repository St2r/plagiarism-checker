"""
2022-03-26 11:47:16
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1600 KB
Accepted | 1 * (35 / 100) | 2 ms | 1592 KB
Accepted | 1 * (60 / 100) | 4 ms | 1612 KB

"""

#include <stdio.h>
int main(){
	int n,t,i,sum;
	scanf("%d\n",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){sum=0;
		for(t=1;t<a[i];t++){
			if(a[i]%t==0){sum=sum+t;
			}
		}if(sum==a[i]){
			printf("YES");
		}else{printf("NO");
		}if(i<n-1){printf("\n");
		} 
	}
}