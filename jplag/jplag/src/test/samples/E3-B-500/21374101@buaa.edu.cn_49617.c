"""
2022-03-28 22:19:30
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1732 KB
Accepted | 1 * (35 / 100) | 1 ms | 1652 KB
Accepted | 1 * (60 / 100) | 3 ms | 1588 KB

"""

#include<stdio.h>

int main(){
	int n,i=1,sum=0;
	int a[101]={0};
	int gcb=1;
	
	scanf("%d",&n);
	
	while(i<=n){
		scanf("%d\n",&a[i]);
		i++;
	}
	
	
	i=1;
	
	
	while(i<=n){
		sum=0;
		gcb=1;
		while(gcb<a[i]){
			if(a[i]%gcb==0) sum=sum+gcb;
			gcb++;
		}
		
		
		if(sum==a[i]) printf("YES\n");
		else          printf("NO\n");
		i++;
	}
	return 0;
}