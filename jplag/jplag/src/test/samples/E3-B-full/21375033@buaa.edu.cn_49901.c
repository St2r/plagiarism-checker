"""
2022-03-29 21:11:23
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1568 KB
Accepted | 1 * (35 / 100) | 0 ms | 1568 KB
Accepted | 1 * (60 / 100) | 2 ms | 1648 KB

"""

#include<stdio.h>

int main(){
	int n,a[100],b,c,i=0;
	scanf("%d",&n);
	for(i;i<n;i++){
		scanf("%d",&a[i]);
		b=1;c=0;
		for(b;b<=a[i]/2;b++){
			if(a[i]%b==0){
				c=c+b;
			}
		}
		if(c==a[i]){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
    }
	
	return 0;
}