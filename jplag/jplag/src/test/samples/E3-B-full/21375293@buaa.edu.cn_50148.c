"""
2022-03-29 23:35:47
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1664 KB
Accepted | 1 * (35 / 100) | 3 ms | 1656 KB
Accepted | 1 * (60 / 100) | 4 ms | 1732 KB

"""

#include<stdio.h>
int main()
{
	int n,a[10001];
	int b;
	scanf("%d",&n);
	for(int i=0;i < n;i++){
		scanf("%d",&b);
		int sum=1;
		for(int j=2;j<10001;j++){
			if(b%j==0){
				sum=sum+j;
			} 
		}sum=sum-b;
		if(sum==b){printf("YES\n");
		}else{
			printf("NO\n");
		}
	} 
	return 0;
}