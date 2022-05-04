"""
2022-03-26 09:02:37
AC
1.0
Accepted | 1 * (5 / 100) | 7 ms | 1604 KB
Accepted | 1 * (35 / 100) | 5 ms | 1604 KB
Accepted | 1 * (60 / 100) | 16 ms | 1588 KB

"""

#include<stdio.h>
int main(){
	int n;
	int a[101];
	int s=0;
	scanf("%d",&n);
	for(int x1=1;x1<=n;x1++){
		scanf("%d",&a[x1]);
	}
	for(int x2=1;x2<=n;x2++){
		s=0;
		for(int x3=1;x3<a[x2];x3++){
			if(a[x2]%x3==0){
				s=s+x3;
			}
		}
		if(s==a[x2]){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}