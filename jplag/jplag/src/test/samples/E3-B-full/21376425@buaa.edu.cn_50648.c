"""
2022-03-26 19:56:24
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1676 KB
Accepted | 1 * (35 / 100) | 2 ms | 1580 KB
Accepted | 1 * (60 / 100) | 4 ms | 1680 KB

"""

#include<stdio.h>
int main()
{
	int n,a;
	int sum=0;
	int b[10000]={0};
	scanf("%d",&n);
	for(int l=0;l<n;l++){
		scanf("%d",&a);
		if(a==1) b[l]=1;
		else {
		for(int i=1;i<a;i++){
			if((a%i)==0){
				sum+=i;
			}
		}
		if(sum==a){
			b[l]=1;
		}
		sum=0;
	}
		
	}
	for(int l=0;l<n;l++){
		if(b[l]==1) printf("YES\n");
		if(b[l]==0) printf("NO\n");
	}
}