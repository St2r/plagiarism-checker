"""
2022-03-29 22:26:09
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1660 KB
Accepted | 1 * (35 / 100) | 1 ms | 1696 KB
Accepted | 1 * (60 / 100) | 2 ms | 1748 KB

"""

#include<stdio.h>
int main(){
	int n,i=0,sum[1000]={0},a[1000]={0},m=1,p=0,q;
	
	scanf("%d",&n);
	while(p<n){
		scanf("%d ",&a[p]);
		p++;
	}
	
	while(i<n){
		while(m<a[i]){
			if(a[i]%m==0){
				sum[i]+=m;
			}
			m++;
		}
		m=1;
		
		if(a[i]==sum[i]){
			printf("YES\n");
		}else{
			printf("NO\n");
	    }
		i++;
	}
	
	return 0;
}