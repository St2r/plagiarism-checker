"""
2022-03-29 20:25:46
WA
0.05
Accepted | 1 * (5 / 100) | 2 ms | 1544 KB
Wrong Answer | 0 * (35 / 100) | 2 ms | 1628 KB
Wrong Answer | 0 * (60 / 100) | 4 ms | 1544 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int n,x,a[200]={0},i,c=0,sum;
	scanf("%d",&n);
	for(;n!=0;n--){
		scanf("%d",&x);
		sum=1;
		for(i=2;i<x;i++){
			if(x%i==0){
				a[c]=i;
				c++;
			}
			if(a[c]==a[c-1]){
				a[c]=0;
			}
		}
		for(;c>=0;c--){
			sum=sum+a[c];
		}
		c=0;
		int a[200]={0};
		if(sum==x){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}